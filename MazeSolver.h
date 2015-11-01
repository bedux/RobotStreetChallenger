
#ifndef _MAZESOLVER
#define _MAZESOLVER


	#include "Define.h"
	#include "arduino.h"
        #include "BaseAction.h"
        #include "PingSensor.h"
	
        extern void GiroscopioClass(void);
        extern float getAngle(void);
        extern PingSensorClass *leftPing;
        extern  PingSensorClass *rightPing;
        extern PingSensorClass* frontPing;
        
class MazeSolverClass:public ActionClass
{

 public:
 
         MazeSolverClass();
         ~MazeSolverClass(){

         }
          void start();
	  void step();
	  void end();
         
  private:
  
        float angleGoal=-1;
        void Rotate90Right();
        


        bool col = true;


        
       
        
};

extern MazeSolverClass MazeSolver;

#endif

