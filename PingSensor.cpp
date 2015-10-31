//
//
//

#include "PingSensor.h"

long PingSensorClass::getDistance()
{
  // establish variables for duration of the ping, 
  // and the distance result in inches and centimeters:
  long duration, inches, cm;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(this->pin, OUTPUT);
  digitalWrite(this->pin, LOW);
  delayMicroseconds(2);
  digitalWrite(this->pin, HIGH);
  delayMicroseconds(5);
  digitalWrite(this->pin, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(this->pin, INPUT);
  duration = pulseIn(this->pin, HIGH);

  // convert the time into a distance
  cm = microsecondsToCentimeters(duration);
  
  //Serial.print("dist ");
  //Serial.println(cm);

  return cm;
}



long PingSensorClass::microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}



extern PingSensorClass PingSensor;

