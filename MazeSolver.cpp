#include "MazeSolver.h"







MazeSolverClass::MazeSolverClass() {


}

void MazeSolverClass::start() {

}


void MazeSolverClass::Rotate90Right(){
	


}




void MazeSolverClass::step() {






	long currSX = leftPing->getDistance();
	long currUP  = frontPing->getDistance();
	long currDX = rightPing->getDistance();

	long avg = 8;



	// if(currUP < 10){
	// 	Serial.println("asdad");
	// 	return;
	// }


	// if(currSX > avg){
	// 	left(250, 250);
	// }else if(currSX < avg){
	// 	right(250, 250);
	// }else{
	// 	forward(250, 250);
	// }

//
 
 
 if(currUP < 15){
   
   long currMax = sqrt(avg*avg+15*15)+2;
   long help = 0;
   bool leftC = false;
   
   while(leftPing->getDistance() > 2 ){
         left(250, 250);
         help = frontPing->getDistance();
         if(help >currMax){
           leftC = true; 
           return;
         }
   }
   if(!leftC){
       while(rightPing->getDistance() > 2){
           right(250, 250);
           help = frontPing->getDistance();
           if(help >currMax){
             leftC = false;
             return;
           }
     }

         
         
   }
        
 
 }
 
 
 
  if(currSX < avg){
      right(250, 250);
      forward(250, 100);
  }else if(currSX > avg){
     left(250, 250);
     forward(100, 250);
  }else{
     forward(200, 200);
  }
 




//   
//  if(currUP < 10){
//    right(250, 100);
//    return;
//  
//  }
//   
//   



//  Serial.println(currDST);
//  
//  if(currUP < 10){
//    right(250, 100);
//    return;
//  
//  }
//  



}
void MazeSolverClass::end() {

}
