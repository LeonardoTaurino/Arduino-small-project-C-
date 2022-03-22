int lowPin=A2;
int highPin=A4;
int lowRead;
int highRead;
int LEDPin=9;
int LEDLevel=0;
int buzzPin=12;
int tempo=100;
void setup() {
  // put your setup code here, to run once:
pinMode(lowPin,INPUT);
pinMode(highPin,INPUT);
pinMode(LEDPin,OUTPUT);
pinMode(buzzPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lowRead = digitalRead(lowPin);
highRead = digitalRead(highPin);
analogWrite(LEDPin,LEDLevel);
Serial.print("LOW: ");
Serial.println(lowRead);
Serial.print("high: ");
Serial.println(highRead);
if(highRead==0 && LEDLevel<250){
  LEDLevel=LEDLevel+10;
  }
if(lowRead==0 && LEDLevel>0){
  LEDLevel=LEDLevel-10;
  }
if(LEDLevel==250 || LEDLevel==0){
  digitalWrite(buzzPin,HIGH);
  }
  else{
    digitalWrite(buzzPin,LOW);
    }
  delay(tempo);
}
