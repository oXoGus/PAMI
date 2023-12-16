#define pinIN1 4
#define pinIN2 2
#define pinEN1 3

#define pinIN3 7 
#define pinIN4 8
#define pinEN2 5


void setup() {
  pinMode(pinIN1, OUTPUT);
  pinMode(pinIN2, OUTPUT);
  pinMode(pinEN1, OUTPUT);
  pinMode(pinIN3, OUTPUT);
  pinMode(pinIN4, OUTPUT);
  pinMode(pinEN2, OUTPUT);


  // sens du 1er moteur
  digitalWrite(pinIN1, 1);
  digitalWrite(pinIN2, 0);
  
  // sens du 2eme 
  digitalWrite(pinIN3, 1);
  digitalWrite(pinIN4, 0);

  // vitesse du 1er moteur 
  analogWrite(pinEN1, 128);

  // vitesse du 2eme moteur 
  analogWrite(pinEN2, 128);

  delay(3000);

  // on arrete les moteurs 

  analogWrite(pinEN1, 0);
  analogWrite(pinEN2, 0); 

}

void loop() {
  // put your main code here, to run repeatedly:

}
