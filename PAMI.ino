#include <Servo.h>
#include <Ultrasonic.h>
// moteur 1
#define pinIN1 4
#define pinIN2 2
#define pinEN1 3

// moteur 2
#define pinIN3 7 
#define pinIN4 8
#define pinEN2 5

// servo moteur 
#define servoPin 9

// capteur de distance 
#define trigPin 10
#define echoPin 11 



Servo servo;
Ultrasonic ultrasonic(trigPin, echoPin);

int dist;

void setup() {

  Serial.begin(9600);
  Serial.println("test");

  servo.attach(servoPin);
  
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
  analogWrite(pinEN1, 255);

  // vitesse du 2eme moteur 
  analogWrite(pinEN2, 255);

  delay(300000);

  // on arrete les moteurs 

  analogWrite(pinEN1, 0);
  analogWrite(pinEN2, 0); 

}

void loop() {
  for(unsigned char angle = 0; angle <= 180; angle++){
    servo.write(angle);
    dist = ultrasonic.Ranging(CM);
    Serial.println(dist);
    if (dist < 5){
        // vitesse du 1er moteur 
        analogWrite(pinEN1, 0);

        // vitesse du 2eme moteur 
        analogWrite(pinEN2, 0);
    }
    else{
        // vitesse du 1er moteur 
        analogWrite(pinEN1, 255);

        // vitesse du 2eme moteur 
        analogWrite(pinEN2, 255);
    }
    delay(1);
  }

  for(unsigned char angle = 180; angle >= 0; angle--){
    servo.write(angle);
    dist = ultrasonic.Ranging(CM);
    Serial.println(dist);
    if (dist < 5){
        // vitesse du 1er moteur 
        analogWrite(pinEN1, 0);

        // vitesse du 2eme moteur 
        analogWrite(pinEN2, 0);
    }
    else{
        // vitesse du 1er moteur 
        analogWrite(pinEN1, 255);

        // vitesse du 2eme moteur 
        analogWrite(pinEN2, 255);
    }
    delay(1);
  }
}
