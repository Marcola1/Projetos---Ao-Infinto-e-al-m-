#include "Servo.h"

Servo servo;

void setup() {
  servo.attach(2);
}

void loop() {
    servo.write(70);
    delay(2000);
}

/*
  int angulo = 0;
  for (angulo = 110; angulo > 180; angulo -= 10) {     // Executa movimentos no sentido horário
    servo.write(angulo);                            // Altera sua velocidade de 10 em 10
    delay(2000);                                       // Cada velocidade funciona por 2 segundos
  }
 
  servo.write(90);                                  // Para o servo motor
  delay(2000);                                         // Aguarda 2 segundos para continuar
 
  for (angulo = 70; angulo >= 0; angulo -= 10) {       // Executa movimentos no sentido anti horário
    servo.write(angulo);                            // Executa o ângulo de 10 em 10 graus
    delay(2000);                                       // Cada velocidade funciona por 2 segundos
  }

  servo.write(90);                                  // Para o servo motor
  delay(2000);                                         // Aguarda 2 segundos para continuar
}
*/
