

#include "LineFollower.h"
#include <SPI.h>
#include <MFRC522.h>
#include <HashMap.h>
#include "Define.h"
#include "BaseAction.h"
#include "Dispatcher.h"
DispatcherClass *dsp;
void setup()
{
  Serial.begin(9600);
Serial.println("init");
dsp = new DispatcherClass();
  /* add setup code here */

}

void loop()
{
  Serial.println("Step");
    dsp->NextStep();
  /* add main program code here */

}
