// LED Flip Flop

void setup() {
 pinMode(16, OUTPUT);

}

void loop() {
  digitalWrite(16, HIGH);
  delay(2000); // milisrcond = 1 second
  digitalWrite(16, LOW);

}

// ON = HIGH = 1
