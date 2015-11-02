#include "Birilli.h"


void BirilliClass::start(){

	 // digitalWrite(2, HIGH); 
}

void BirilliClass::step(){


		  digitalWrite(1, HIGH); 
		  	long currSX = leftPing->getDistance();
		    long currDX = rightPing->getDistance();
		   

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

	digitalWrite(1, LOW); 
}