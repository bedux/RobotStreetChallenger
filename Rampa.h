
#ifndef _RAMPA
#define _RAMPA


	#include "Define.h"
	#include "arduino.h"
    #include "BaseAction.h"
    #include "PingSensor.h";


extern PingSensorClass *leftPing;
 extern  PingSensorClass *rightPing;
 
class RampaClass:public ActionClass
{

public:

   RampaClass();
   ~RampaClass();
   void start();
   void step();
   void end();
   


};

extern RampaClass Rampa;

#endif

