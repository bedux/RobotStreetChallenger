
#ifndef _MAZESOLVER
#define _MAZESOLVER


	#include "Define.h"
	#include "arduino.h"
        #include "BaseAction.h"
        #include "PingSensor.h"
	
        extern void GiroscopioClass(void);
        extern float getAngle(void);
        
        
class MazeSolverClass:public ActionClass
{

 public:
 
         MazeSolverClass();
         ~MazeSolverClass(){
             free(frontPing);
             free(leftPing);
         }
          void start();
	  void step();
	  void end();
         
  private:
  
        PingSensorClass* frontPing;
        PingSensorClass* leftPing;
        PingSensorClass* rightPing;
        PingSensorClass* colui;
        bool col = true;


        
       
        
};

extern MazeSolverClass MazeSolver;

#endif

