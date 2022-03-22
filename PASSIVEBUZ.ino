int buzzPin=8;
int potPin=A5;
int potVal;
float buzzTime;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.println(buzzTime*1000);


potVal=analogRead(potPin);
buzzTime=potVal/1023.;
digitalWrite(buzzPin,255);
delayMicroseconds(buzzTime*1000);
digitalWrite(buzzPin,LOW);
delayMicroseconds(buzzTime*1000);

}
