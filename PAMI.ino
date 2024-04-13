#include <AFMotor.h>

AF_DCMotor motor1(1); // connecter le moteur1 au port M1 du module Shield L293D
AF_DCMotor motor2(2);


uint16_t debut;


void setup() {
  /*
  while(tirette);
  debut = millis();
  */
}

void loop() {
  /*
  // tant que on reste dans le temps impartit et qu'on a pas touché une plante
  while (!plante touché && (millis() - debut < 10**3) && !objetDetecte){
    if (!on détecte un objet && millis - debut < tps limite pour détecter){
      stop = 1;
    }
    
    // on avance 
    motor1.setSpeed(100); // définir la vitesse du moteur 1
    motor2.setSpeed(100); // définir la vitesse du moteur 2 

    motor1.run(FORWARD);
    motor2.run(FORWARD);


  }
  // on arrete tout 
  
  motor1.setSpeed(0); // définir la vitesse du moteur 1
  motor2.setSpeed(0); // définir la vitesse du moteur 2 
      
  // on eteint les moteur
  motor1.run(RELEASE);
  motor2.run(RELEASE);

  
  */
  
  
  motor1.setSpeed(100); // définir la vitesse du moteur 1
  motor2.setSpeed(100); // définir la vitesse du moteur 2 
  // turn on motor
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  
  delay(3000);  
  
  // on eteint le moteur
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  
}
