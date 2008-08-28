// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2006 Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the GNU GPL v2.0.
 *
 */


#include <yarp/String.h>

#include <yarp/UnitTest.h>
//#include "TestList.h"

using namespace yarp;

class StringTest : public UnitTest {
public:
    virtual String getName() {
        return "StringTest";
    }
  
    void testNulls() {
        report(0,"testing null insertion");
        String s;
        s += 'h';
        s += '\0';
        s += 'd';
        checkEqual((int)s.length(),3,"length with internal null");
        checkEqual(s[1],'\0',"null is there");
        checkEqual(s[2],'d',"after null");
    }

    virtual void runTests() {
        testNulls();
    }
};

static StringTest theStringTest;

UnitTest& getStringTest() {
    return theStringTest;
}
