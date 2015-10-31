#include "MazeSolver.h"




   


MazeSolverClass::MazeSolverClass() {
  this->frontPing = new PingSensorClass(ULTRASONIC_FRONT);
  this->leftPing = new PingSensorClass(ULTRASONIC_LEFT);
  this->rightPing = new PingSensorClass(ULTRASONIC_RIGHT);
  colui = (this->leftPing);
  GiroscopioClass();
  Serial.println(getAngle());


}

void MazeSolverClass::start() {

}


void MazeSolverClass::step() {
  Serial.println(getAngle());

//  long currSX = leftPing->getDistance();
//  long currUP  = frontPing->getDistance();
//  long currDX = rightPing->getDistance();
//  
//
//  long avg = (currSX + currDX)/2;
//  
//  
//  if(currUP < 15){
//    
//    long currMax = -100;
//    long help = 0;
//    bool leftC = true;
//    
//    while(leftPing->getDistance() > 5){
//          left(250, 100);
//          help = frontPing->getDistance();
//          if(help >currMax){
//            currMax = help;
//            leftC = true;
//          }
//    }
//    
//      while(rightPing->getDistance() > 5){
//          right(250, 100);
//          help = frontPing->getDistance();
//          if(help >currMax){
//            currMax = help;
//            leftC = false;
//          }
//          
//          
//    }
//      if(leftC){
//        
//          while(1){
//              currSX = leftPing->getDistance();
//              if(currSX < 2){
//                 right(250, 100);
//                 forward(250, 100);
//             }else if(currSX > 2){
//                left(100, 250);
//                forward(100, 250);
//             }else{
//                forward(200, 200);
//             }
//          }
//      
//      }else{
//      
//          while(1){
//              currDX = rightPing->getDistance();
//              if(currDX > 2){
//                 right(250, 100);
//                 forward(250, 100);
//             }else if(currDX < 2){
//                left(100, 250);
//                forward(100, 250);
//             }else{
//                forward(200, 200);
//             }
//          }
//      
//      
//      }    
//    
//    Serial.println(leftC?"left":"right");
//    return;
//  
//  }
//  
//  
//  
//   if(currSX < avg){
//       right(250, 100);
//       forward(250, 100);
//   }else if(currSX > avg){
//      left(100, 250);
//      forward(100, 250);
//   }else{
//      forward(200, 200);
//   }
//  

   
   
   
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
