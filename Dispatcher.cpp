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
  this->currentAction = this->defaultAction;
}



long DispatcherClass::GetRFID_UID()
{
  Serial.print("GetRFID");
	// Look for new cards
	if (!mfrc522->PICC_IsNewCardPresent())
	{
    Serial.print("No");
		return 0L;
	}

	// Select one of the cards
	if (!mfrc522->PICC_ReadCardSerial())
	{ Serial.print("No");
		return 0L;
	}

	//Transform Card id in long
	long ret = 0;
	for (byte i = 0; i < mfrc522->uid.size; i++)
	{
		ret += mfrc522->uid.uidByte[i];
	}

  Serial.println(ret);
	return ret;
}



void DispatcherClass::NextStep() {
	
	//prendo Id della tessera.
	long currentID = this->GetRFID_UID();
  
  char * p;
  if(currentID!=0)
   p = (char*)&currentID;


   
	//Trovata Tessera!
	if (currentID != 0) {
		//So  che azione fare per questo ostacolo!
		if (this->actions.getIndexOf(p)< ELEMENT_HASH) {
			//termino l'azione precedente
			this->currentAction->end();
			//assegno a currentAction la nuova azione  
			this->currentAction = this->arrayAct[this->actions.getValueOf(p)];
			//inizializo la nuova azione
			this->currentAction->start();
		}
	}
	//Step dell'azione!
	this->currentAction->step();
	
}


void dump_byte_array(byte *buffer, byte bufferSize) {
    for (byte i = 0; i < bufferSize; i++) {
        Serial.print(buffer[i] < 0x10 ? " 0" : " ");
        Serial.print(buffer[i], HEX);
    }
}
