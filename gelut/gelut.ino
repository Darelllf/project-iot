#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define  trigger  5
#define  echo  4

long duration;
int distance;

// You should get Auth Token in the Blynk App.

char auth[] = "QaEz5yw0Z3VdNTt_T3hXe_k9YfEAU-p5";
char ssid[] = "DNA";   // your ssid 
char pass[] = "gratisanaja"; // your pass

BlynkTimer timer;

void setup()
{
  // Debug console
  pinMode(trigger, OUTPUT);  // Sets the trigPin as an Output
  pinMode(echo, INPUT);   // Sets the echoPin as an Inpu
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  // Setup a function to be called every second
  timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run();
  timer.run();
}
void sendSensor()
{
  digitalWrite(trigger, LOW);   // Makes trigPin low
  delayMicroseconds(2);       // 2 micro second delay

  digitalWrite(trigger, HIGH);  // tigPin high
  delayMicroseconds(10);      // trigPin high for 10 micro seconds
  digitalWrite(trigger, LOW);   // trigPin low

  duration = pulseIn(echo, HIGH);   //Read echo pin, time in microseconds
  distance = duration * 0.034 / 2;   //Calculating actual/real distance

  Serial.print("Distance = ");        //Output distance on arduino serial monitor
  Serial.println(distance);
  
  if(distance <= 5)
  {
    Blynk.tweet("My Arduino project is tweeting using @blynk_app and it’s awesome!\n #arduino #IoT #blynk");
    Blynk.notify("Post has been twitted");
  }
  Blynk.virtualWrite(V0, distance);
  delay(1000);                        //Pause for 3 seconds and start measuring distance again
}
