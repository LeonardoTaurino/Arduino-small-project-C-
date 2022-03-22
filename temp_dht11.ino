#include <DHT.h>
#include <DHT_U.h>
#define Type DHT11
int sensPin=2;
DHT HT(sensPin,Type);
float TempC;
float TempF;
float Hum;
int tempo=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HT.begin();
delay(tempo);
}

void loop() {
  // put your main code here, to run repeatedly:
Hum=HT.readHumidity();
TempC=HT.readTemperature();
Serial.print("Humidity = ");
Serial.print(Hum);
Serial.print("Temperature = ");
Serial.print(TempC);
Serial.println(" °C");


}
