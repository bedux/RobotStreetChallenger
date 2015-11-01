#include "Birilli.h"


void BirilliClass::start(){

	  digitalWrite(0, LOW); 
}

void BirilliClass::step(){


		  digitalWrite(0, LOW); 
		  	long currSX = leftPing->getDistance();
		    long currDX = rightPing->getDistance();
		    Serial.println(currSX);
		    Serial.println(currDX);

		    long avg = (currSX + currDX)/2;

		    if(currSX < avg){
		      forward(250, 100);
			  }else if(currSX > avg){
			     forward(100, 250);
			  }else{
			  	forward(250, 250);
			  }


}

void BirilliClass::end(){

	digitalWrite(0, LOW); 
}