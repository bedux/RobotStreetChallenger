




// Dispatcher.h

#ifndef _DISPATCHER_h
#define _DISPATCHER_h
#if defined(ARDUINO) && ARDUINO >= 100


#include "BaseAction.h"
#include "Define.h"
#include "LineFollower.h"


#include <SPI.h>
#include <MFRC522.h>
#include <HashMap.h>
#include "arduino.h"


#else
#include "WProgram.h"
#endif

class DispatcherClass
{

  public:
    DispatcherClass();
    void NextStep();


  private:

void ShowReaderDetails();
    HashType<char*, int > hashRawArray[5];
    ActionClass* arrayAct [10];
    HashMap<char*, int> actions = HashMap<char*, int>( hashRawArray , 5 );
    ActionClass* currentAction;
    long GetRFID_UID();
    MFRC522* mfrc522;
    ActionClass* defaultAction;

};



#endif

