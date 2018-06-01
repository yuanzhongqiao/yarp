/*
 * Copyright (C) 2006-2018 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#ifndef PRIORITYCARRIER_INC
#define PRIORITYCARRIER_INC

#include <cmath>
#include <yarp/os/ModifyingCarrier.h>
#include <yarp/os/Election.h>
#include <yarp/os/NullConnectionReader.h>
#include <yarp/os/Semaphore.h>
#include <yarp/os/Time.h>
#include <yarp/os/PeriodicThread.h>
#include <yarp/os/BufferedPort.h>

#include <yarp/sig/Vector.h>
#include <yarp/sig/Matrix.h>

#define STIMUL_THRESHOLD        1.0
#define WITH_PRIORITY_DEBUG

namespace yarp {
    namespace os {
        class PriorityGroup;
        class PriorityCarrier;
#ifdef WITH_PRIORITY_DEBUG
        class PriorityDebugThread;
#endif //WITH_PRIORITY_DEBUG
    }
}



/**
 *
 * Manager for priority-aware inputs to a given port.
 *
 */
class yarp::os::PriorityGroup : public PeerRecord<PriorityCarrier> {
public:
    virtual ~PriorityGroup() {}
    virtual bool acceptIncomingData(yarp::os::ConnectionReader& reader,
                                    PriorityCarrier *source);
    bool recalculate(double t);

public:
    yarp::sig::Matrix InvA;         // the inverse of matrix (I-A) in the equation y(t) = [(I-A)^(-1) * B] .*x(t)
    yarp::sig::Matrix B;            // matrix of biases B in the equation y(t) = [(I-A)^(-1) * B] .*x(t)
    yarp::sig::Matrix Y;            // matrix y(t)
    yarp::sig::Matrix X;            // matrix x(t)
    //yarp::os::Semaphore semDebug;   // this semaphor is used only when debug mode is active
                                    // to control the access to matrices from debug thread
};



#ifdef WITH_PRIORITY_DEBUG
class yarp::os::PriorityDebugThread : public yarp::os::PeriodicThread {
public:
    PriorityDebugThread(PriorityCarrier* carrier);
    virtual ~PriorityDebugThread();
    void run() override;
    bool threadInit() override;
    void threadRelease() override;

public:
    int count;
    PriorityCarrier* pcarrier;
    std::string debugPortName;
    BufferedPort<yarp::sig::Vector> debugPort;
};
#endif //WITH_PRIORITY_DEBUG


/**
 *
 * Allow priority-based message selection.  Under development.
 * Affected by carrier modifiers.  Examples:
 *   tcp+recv.priority+level.15
 *
 */
class yarp::os::PriorityCarrier : public yarp::os::ModifyingCarrier {

#ifdef WITH_PRIORITY_DEBUG
    friend class PriorityDebugThread;
#endif //WITH_PRIORITY_DEBUG

public:
    PriorityCarrier()
#ifdef WITH_PRIORITY_DEBUG
    : debugger(this)
#endif //WITH_PRIORITY_DEBUG
    {
        group = 0/*NULL*/;
        timeConstant = timeArrival = 0;
        timeResting = 0;
        stimulation = 0;
        temporalStimulation = 0;
        isVirtual = false;
        isActive = false;
        baias = 0;
        yi = 0;     // used in debug
    }

    virtual ~PriorityCarrier() {
        if (portName!="") {
            // let peer carriers know I'm gone.
            getPeers().remove(portName,this);
        }
    }

    virtual Carrier *create() override {
        return new PriorityCarrier();
    }

    virtual std::string getName() override {
        return "priority";
    }

    virtual std::string toString() override {
        return "priority_carrier";
    }

    bool isResting(double priority){
        return ((timeResting > 0) &&
                ((priority < 0) || (priority >= STIMUL_THRESHOLD)));
    }


    void stimulate(double t) {

        temporalStimulation = getActualStimulation(t);
        // if it is in active sate, stimulates.
        if(!isResting(temporalStimulation))
        {
            temporalStimulation += stimulation;
            // respecting priority ceiling
            if(temporalStimulation >= STIMUL_THRESHOLD)
            {
                temporalStimulation = STIMUL_THRESHOLD;
                isActive = true;
            }
            // updating arrival time
            timeArrival = t;
        }
    }

    double getActualStimulation(double t);

    double getActualInput(double t);

    virtual bool configure(yarp::os::ConnectionState& proto) override;

    virtual bool acceptIncomingData(yarp::os::ConnectionReader& reader) override;

    virtual void setCarrierParams(const yarp::os::Property& params) override {
        yarp::os::Property property = params;
        timeConstant = property.check("tc", Value(timeConstant)).asFloat64();
        timeResting = property.check("tr", Value(timeResting)).asFloat64();
        stimulation = property.check("st", Value(stimulation)).asFloat64();
        baias = property.check("bs", Value(baias)).asFloat64();
        isVirtual = property.check("virtual", Value(isVirtual)).asBool();
        if(property.check("ex"))
            excitation = property.findGroup("ex");
    }

    virtual void getCarrierParams(yarp::os::Property& params) override {
        params.put("tc", timeConstant);
        params.put("tr", timeResting);
        params.put("st", stimulation);
        params.put("bs", baias);
        params.put("virtual", (int)isVirtual);
        params.put("ex", excitation.toString());
    }



public:
    double timeConstant;            // priority reset time (tc > 0)
    double timeResting;             // priority resting time (tr > 0)
    double stimulation;             // stimulation value of the message (s > 0)
    double temporalStimulation;     // current priority of the message S(t)
    double timeArrival;             // arrival time of the message
    bool isVirtual;                 // a virtual link does not carry any data
    bool isActive;                  // true if port is in active state X(t)
    double baias;                   // baias value for excitation
    Bottle excitation;              // a list of exitatory signals as (name, value)
    std::string sourceName;

    double yi;                      // this is set in the recalculate() for the debug purpose

private:
    std::string portName;
    PriorityGroup *group;

    static ElectionOf<PriorityGroup> *peers;

    static ElectionOf<PriorityGroup>& getPeers();

#ifdef WITH_PRIORITY_DEBUG
private:
    PriorityDebugThread debugger;
#endif //WITH_PRIORITY_DEBUG
};



#endif


