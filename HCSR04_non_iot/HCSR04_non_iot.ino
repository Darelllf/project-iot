#include <HCSR04.h>

#define trigger 5 // D1
#define echo 4 // D2 = pin

HCSR04 distance(trigger, echo);

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
   float jarak = distance.dist(); 
   Serial.println(jarak);
   delay(1000);
}
