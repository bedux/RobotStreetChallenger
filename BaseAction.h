// BaseAction.h

#ifndef _BASEACTION_h
#define _BASEACTION_h


	#include "arduino.h"


class ActionClass
{


public:
	virtual void start() =0;
	virtual void step()=0;	
	virtual void end()=0;
};




#endif

