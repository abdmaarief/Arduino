#define BLYNK_TEMPLATE_ID "...."
#define BLYNK_TEMPLATE_NAME "...."
#define BLYNK_AUTH_TOKEN "...."

#define BLYNK_PRINT Serial
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

//Jaringan
char ssid[] = "....";
char pass[] = "....";

#include <SoftwareSerial.h>
SoftwareSerial EspSerial(2, 3); // PIN TX, RX

#define ESP8266_BAUD 38400 //Baud Rate
ESP8266 wifi(&EspSerial);

void setup()
{
  Serial.begin(9600);
  EspSerial.begin(ESP8266_BAUD);
  delay(10);
  Blynk.begin(BLYNK_AUTH_TOKEN, wifi, ssid, pass);
}

void loop()
{
  Blynk.run();
}

