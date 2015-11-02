
#include <MPU6050_6Axis_MotionApps20.h>






#include <I2Cdev.h>
#include <Wire.h>





#define ARDUINO 100

#include <HashMap.h>
#include "Dispatcher.h"
#include "PingSensor.h"
#include "Rampa.h"



PingSensorClass* leftPing;
PingSensorClass* rightPing;
PingSensorClass* frontPing;
DispatcherClass *dsp;

void setup()
{

//Serial.begin(9600);

 
  dsp = new DispatcherClass();
  leftPing = new PingSensorClass(ULTRASONIC_LEFT);
  rightPing = new PingSensorClass(ULTRASONIC_RIGHT);
 frontPing = new PingSensorClass(ULTRASONIC_FRONT);
  pinMode(1, OUTPUT );
  digitalWrite(1,LOW);
  /* add setup code here */
 // GiroscopioClass();

  
 // while(  abs(getAngle() - curr) > 0.005 ){Serial.print(curr); Serial.print("  "); delay(1000); curr = getAngle();  Serial.println(curr);}
}

void loop()
{


 

  dsp->NextStep();

 
  /* add main program code here */

}




// LineFollower.h





