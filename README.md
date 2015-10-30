# RobotStreetChallenger
Ated4kids Robot Street Challenger


Come funziona?

Il primo  file da aprire e' <a href="RobotStreetChallenger.ino"> RobotStreetChallenger.ino </a>
Come potete vedere contiene le due classiche funzioni di arduino, <b>init</b> e <b>loop</b>,
Nella init inizializzo il dispacher mentre nella loop gli dico di fare uno step.
Il dispacher e' responsabile di decidere che azione fare(Line follower, Birilli, Labirinto ecc), basandosi su quello che legge dal RFID.
Nel  <a href="Dispacher.h"> Dispatcher </a> trovate un HashMap(Una sorta di dizionario, dove avete invece delle parole, il codice del RFID e come significato l'azione che il robo deve svolgere. ) che  contiene tutte i possibili ostaoli che il robottino puo' trovare,oltre a questo contiene la definizione di azione di default,settata a line follower e il codice necessario per utilizzare RFID.

Praticamente, la loop chiama la nexStep del Dispacher che a sua volta chiama la step() dipendente al'azione corrente.

Le action invee contengono cosa realmente fa l'arduino.

 <a href="LineFollower.cpp"> LineFollower </a>
 Leggete il codice per capire come funziona :)


