




// Dispatcher.h

#ifndef _DISPATCHER_h
#define _DISPATCHER_h



#include "BaseAction.h"
#include "Define.h"
#include "LineFollower.h"
#include "Rampa.h"
#include "MazeSolver.h"
#include "Birilli.h"
 

#include <SPI.h>
#include <MFRC522.h>
#include <HashMap.h>
#include "arduino.h"




class DispatcherClass
{

  public:
    DispatcherClass();
    void NextStep();


  private:

    void ShowReaderDetails();
    HashType<long, int > hashRawArray[10];
    ActionClass* arrayAct [10];
    HashMap<long, int> actions = HashMap<long, int>( hashRawArray , 10 );
    ActionClass* currentAction;
    long GetRFID_UID();
    MFRC522* mfrc522;
    ActionClass* defaultAction;

};



#endif

