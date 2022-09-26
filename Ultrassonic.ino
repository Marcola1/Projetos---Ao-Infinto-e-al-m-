#include <Ultrasonic.h>

#define pino_trigger 10
#define pino_echo 9

Ultrasonic ultrasonic(pino_trigger, pino_echo);

void setup(){
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}

void loop(){
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  
  Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  delay(500);
}
