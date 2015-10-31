// LineFollower.h

#ifndef _PINGSENSOR
#define _PINGSENSOR


	#include "Define.h"
	#include "arduino.h"
        
	

class PingSensorClass
{

 public:
        PingSensorClass(int pin){this->pin = pin;}
	long getDistance();  
  private:
        int pin;
        long microsecondsToCentimeters(long microseconds);
        
};

extern PingSensorClass PingSensor;

#endif

