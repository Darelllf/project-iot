#include <DHT.h>

#define DHTPIN 2 // D4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT11 test!")); // = nyimpen di flash memory
  dht.begin();
  

}

void loop() {
  delay(2000);
  float h = dht.readHumidity(); // kelembapan
  float t = dht.readTemperature(); // suhu

  if(isnan(h)||isnan(t)){
    Serial.println(F("Failed to read from dht11!"));
    return;
    
  }
  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("% Temperature: "));
  Serial.print(t);
  Serial.print("c");

}
