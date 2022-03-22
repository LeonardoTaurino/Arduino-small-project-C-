#include <math.h>

float letta;
int PinLettura=A0;
float sec;

void setup() {
  // put your setup code here, to run once:
pinMode(PinLettura, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
letta=analogRead(PinLettura);
sec = round(letta*70/1023+20);

Serial.println(sec);

}
