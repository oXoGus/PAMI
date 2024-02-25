#include <AFMotor.h>

AF_DCMotor motor1(1); // connecter le moteur1 au port M1 du module Shield L293D
AF_DCMotor motor2(2);

void setup() {
  
}

void loop() {

  if 
  // Set the speed to start, from 0 (off) to 255 (max speed)
  motor1.setSpeed(100); // définir la vitesse du moteur 1
  motor2.setSpeed(100); // définir la vitesse du moteur 2 
  // turn on motor
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  
  delay(3000);  
  
  // on eteint le moteur
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  /*
  for(unsigned char angle = 0; angle <= 180; angle++){
    servo.write(angle);
    dist = ultrasonic.Ranging(CM);
    Serial.println(dist);
    while (dist < 5){ // tant que l'on détecte un object a moins de 5 cm on s'arrete 
        // vitesse du 1er moteur 
        analogWrite(pinEN1, 0);

        // vitesse du 2eme moteur 
        analogWrite(pinEN2, 0);
        dist = ultrasonic.Ranging(CM);
    }
    
    // vitesse du 1er moteur 
    analogWrite(pinEN1, vitesseAvance);

    // vitesse du 2eme moteur 
    analogWrite(pinEN2, vitesseAvance);
    delay(1);
  }

  for(unsigned char angle = 180; angle >= 0; angle--){
    servo.write(angle);
    dist = ultrasonic.Ranging(CM);
    Serial.println(dist);
    while(dist < 5){ // tant que l'on détecte un object a moins de 5 cm on s'arrete 
        // vitesse du 1er moteur 
        analogWrite(pinEN1, vitesseArret);

        // vitesse du 2eme moteur 
        analogWrite(pinEN2, vitesseArret);
        dist = ultrasonic.Ranging(CM);
    }
    // vitesse du 1er moteur 
    analogWrite(pinEN1, vitesseAvance);
        
    // vitesse du 2eme moteur 
    analogWrite(pinEN2, vitesseAvance);
    delay(1);
  }*/
}
