// Define.h

#ifndef _DEFINE_h
#define _DEFINE_h



#include "arduino.h"


//CODING

#define ELEMENT_HASH  1

//MOTORI
#define E1	6 //M1 Speed Control
#define E2  5 //M2 Speed Control
#define M1  8 //M1 Direction Control
#define M2  7 //M2 Direction Control

//RFID

#define RST_PIN         9           // Configurable, see typical pin layout above
#define SS_PIN          10          // Configurable, see typical pin layout above

//LINE SENSORS
#define SX 1
#define DX 2
#define UP 3

//PING SEBSOR

#define ULTRASONIC_FRONT 1
#define ULTRASONIC_LEFT 3
#define ULTRASONIC_RIGHT 4


//MAZE SOLVER INFO
#define MIN_DISTANCE_LEFT 20
#define MIN_DISTANCE_TOP 10
#define DELTA 0

//FLAG
#define DEBUG

void right(char a, char b);
void left(char a, char b);
void forward(char a, char b);
void reverse(char a, char b);
void stop(void);


#endif

