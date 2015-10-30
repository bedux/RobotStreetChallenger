//
//
//

#include "LineFollower.h"

//Stati iniziali, ogni for loop vengono aggiornati coi valori dei sensori
int l1 = 1;
int l2 = 1;
int l3 = 1;

//stati che salvano solo i valori validi letti dai sensori (usati per creare una sorta di memoria sul passato)
int f1 = 0;
int f2 = 1;
int f3 = 0;
int getLine (int pin) {
  int c = 1;
  if (pin >= 11) {
    c = digitalRead(pin);
    return c;
  }
  else {
    c = analogRead(pin);
  }

  if (pin == 3 || pin == 2 || pin == 1) {
    if (c < 10) return 0;
    return 1;
  }
  if (c < 10) return 0;
  return 1;
}


void LineFollowerClass::start() {

}

void LineFollowerClass::end() {

}


void LineFollowerClass::step() {


  l1 = getLine(SX);
  l2 = getLine(UP);
  l3 = getLine(DX);


  if (l1 == 1 && l2 == 1 && l3 == 1) //Tempo di decidere, i sensori sono tutti sul bianco!
  {
    l1 = f1;
    l2 = f2;
    l3 = f3;


  } else {

    if   (l1 == 0 && l2 == 1 && l3 == 0) { //condizione dubbia/ destra o sinistra? ==> la butto via!
      return;
    }
    //salvo i dati, sono buoni
    f1 = l1;
    f2 = l2;
    f3 = l3;

    //vado avanti, ricorda, la decisione viene presa solo quando sei sul bianco! 
    if (f1 == 1 && f3 == 0 && f3 == 1) {
      forward(200, 200);
    }
    else {
      forward(200, 200);
    }
    return;

  }



  if (l1 == 0 && l2 == 1 && l3 == 1 || l1 == 0 && l2 == 0 && l3 == 1) //left turn
  {
    left(100, 100);
  }
  else if (l1 == 1 && l2 == 1 && l3 == 0 || l1 == 1 && l2 == 0 && l3 == 0) //right turn
  {
    right(100, 100);
  }

  else  //go forward straight
  {
    forward(100, 100);
  }

}


LineFollowerClass LineFollower;

