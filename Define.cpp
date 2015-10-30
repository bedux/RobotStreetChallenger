// 
// 
// 

#include "Define.h"

void stop(void) //Stop
{
	digitalWrite(E1, LOW);
	digitalWrite(E2, LOW);
}
void forward(char a, char b)
{
	analogWrite(E1, a);
	digitalWrite(M1, LOW);
	analogWrite(E2, b);
	digitalWrite(M2, LOW);
}
void reverse(char a, char b)
{
	analogWrite(E1, a);
	digitalWrite(M1, HIGH);
	analogWrite(E2, b);
	digitalWrite(M2, HIGH);
}
void left(char a, char b)
{
	analogWrite(E1, a);
	digitalWrite(M1, HIGH);
	analogWrite(E2, b);
	digitalWrite(M2, LOW);
}
void right(char a, char b)
{
	analogWrite(E1, a);
	digitalWrite(M1, LOW);
	analogWrite(E2, b);
	digitalWrite(M2, HIGH);
}