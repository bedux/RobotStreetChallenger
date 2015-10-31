// LineFollower.h

#ifndef _LINEFOLLOWER_h
#define _LINEFOLLOWER_h



	#include "Define.h"
	#include "arduino.h"
	#include"BaseAction.h"
	


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

