// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-
#include <yarp/os/all.h>
#include <stdio.h>
using namespace yarp::os;

int main(int argc, char *argv[]) {
	if (argc!=2) return 1;
	Network::init();
    
    BufferedPort<Bottle> in;
    in.open(argv[1]);
    
	int count = 1;
	while (count>0) {
	    Bottle *msg = in.read();
		count = msg->get(1).asInt();
		printf("at %d\n", count);
	}
    
	Network::fini(); 
    return 0;
}
