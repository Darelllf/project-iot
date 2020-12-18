#include <Servo.h>

Servo servo;

void setup() {
  pinMode(16,OUTPUT);
  servo.attach(2); // 2 = D4
}

void loop() {
  digitalWrite(16,HIGH);
  delay(200);
  digitalWrite(16,LOW);
  delay(100);
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
}
