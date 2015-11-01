// BaseAction.h

#ifndef _BIRILLI_h
#define _BIRILLI_h


	#include "arduino.h"
	#include  "BaseAction.h"
	#include "Define.h"
#include "PingSensor.h"


extern PingSensorClass *leftPing;
 extern  PingSensorClass *rightPing;


class BirilliClass: public ActionClass
{


public:
	 void start();
	 void step();	
	 void end();

};




#endif

