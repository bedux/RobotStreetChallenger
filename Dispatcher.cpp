// 
// 
// 

#include "Dispatcher.h"


DispatcherClass::DispatcherClass() {
	//Aggingere tutti i possibili ostacoli!
	//Se una tessera e' di fine aggiungere l'action  default;
//	this->actions[123123123L] =new ActionClass();

	//Assign RFID reader
	this->mfrc522 = new MFRC522(SS_PIN, RST_PIN);

	//Init RFID
	SPI.begin();        // Init SPI bus
	this->mfrc522->PCD_Init(); // Init MFRC522 card

 

  this->defaultAction = new LineFollowerClass();
  this->arrayAct[0] =  (this->defaultAction);
  this->arrayAct[1] =  new BirilliClass();
  this->arrayAct[2] =  new RampaClass();
  this->arrayAct[3] = new MazeSolverClass();
  this->actions[0](481,2);
  this->actions[1](419,0);
  this->actions[2](777,0);
  this->actions[3](458,0);
  this->actions[4](562,0);

  this->actions[5](328,1);
  this->actions[6](395,0);
  this->actions[7](269,0);
  this->actions[8](633,0);
  this->actions[9](523,0);

  this->actions[10](462,3);
  this->actions[11](516,0);
  this->actions[12](542,0);
  this->actions[13](339,0);
  this->actions[14](413,0);





  this->currentAction = this->defaultAction;
}



long DispatcherClass::GetRFID_UID()
{
//  Serial.print("GetRFID");
	// Look for new cards
	if (!mfrc522->PICC_IsNewCardPresent())
	{
//    Serial.print("No");
		return 0L;
	}

	// Select one of the cards
	if (!mfrc522->PICC_ReadCardSerial())
	{
//  Serial.print("No");
		return 0L;
	}

	//Transform Card id in long
	long ret = 0;
	for (byte i = 0; i < mfrc522->uid.size; i++)
	{
		ret += mfrc522->uid.uidByte[i];
	}



	return ret;
}


int l = 0;

void DispatcherClass::NextStep() {
	
	l++;
	long currentID;
	if(l>10){
		l=0;
		currentID = this->GetRFID_UID();   
	}
	//prendo Id della tessera.
	 

  Serial.println(currentID);  
  if(currentID!=0)


   
	//Trovata Tessera!
	if (currentID != 0) {
		//So  che azione fare per questo ostacolo!
		if (this->actions.getIndexOf(currentID)< ELEMENT_HASH) {

			//termino l'azione precedente
			this->currentAction->end();

			//assegno a currentAction la nuova azione  
			this->currentAction = this->arrayAct[this->actions.getValueOf(currentID)];
			//inizializo la nuova azione
			this->currentAction->start();
		}
	}
	//Step dell'azione!
	this->currentAction->step();
	
}


void dump_byte_array(byte *buffer, byte bufferSize) {
    for (byte i = 0; i < bufferSize; i++) {
        
    }
}
