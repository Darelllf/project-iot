#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "KSvurxkdXhRBG67v3AqC1XNqOd0pSAFh";

// Your WiFi credentials.                                   
// Set password to "" for open networks.              
char ssid[] = "naminanto";    
char pass[] = "dirumahaja"; 
void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
