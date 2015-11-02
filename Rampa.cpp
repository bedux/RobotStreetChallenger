#include "Rampa.h"


RampaClass::RampaClass(){

		  

}
 
   void RampaClass::start(){
		  

   }
   void RampaClass::step(){

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


   void RampaClass::end(){

   }