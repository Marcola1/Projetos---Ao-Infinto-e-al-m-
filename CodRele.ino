#define PinRele_A 6
#define PinRele_B 7

void setup() {
  pinMode(PinRele_A, OUTPUT);
  pinMode(PinRele_B, OUTPUT);
}

void loop() {
  digitalWrite(PinReleA, HIGH);
  delay(1000);
  digitalWrite(PinReleA, LOW);
  delay(1000);
  digitalWrite(PinReleB, HIGH);
  delay(1000);
  digitalWrite(PinReleB, LOW);
  delay(1000);
}
