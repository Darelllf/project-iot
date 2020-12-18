void setup(){
 pinMode(16,OUTPUT);
 pinMode(2,OUTPUT);
 
}

void loop(){
 digitalWrite(16,HIGH);
 delay(2000);
 digitalWrite(2,HIGH);
 delay(2000);
 digitalWrite(16,LOW);
 delay(1000);
 digitalWrite(2,LOW);
 delay(1000);
 
}
