// BaseAction.h

#ifndef _BASEACTION_h
#define _BASEACTION_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"

#endif
class ActionClass
{


public:
	virtual void start() =0;
	virtual void step()=0;	
	virtual void end()=0;
};




#endif

