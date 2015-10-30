// LineFollower.h

#ifndef _LINEFOLLOWER_h
#define _LINEFOLLOWER_h

#if defined(ARDUINO) && ARDUINO >= 100

	#include "Define.h"
	#include "arduino.h"
	#include"BaseAction.h"
	
#else
	#include "WProgram.h"
#endif

class LineFollowerClass:public ActionClass
{
 protected:


 public:
	  void start();
	  void step();
	  void end();
};

extern LineFollowerClass LineFollower;

#endif

