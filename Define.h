// Define.h

#ifndef _DEFINE_h
#define _DEFINE_h

#if defined(ARDUINO) && ARDUINO >= 100

	#include "arduino.h"

#else
	#include "WProgram.h"
#endif
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

//FLAG
#define DEBUG

void right(char a, char b);
void left(char a, char b);
void forward(char a, char b);
void reverse(char a, char b);
void stop(void);


#endif

