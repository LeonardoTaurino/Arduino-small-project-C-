int redLed = 4;
int greenLed = 8;
int bluLed = 12;
int tempo = 500;
int VERO
void setup() {
  // put your setup code here, to run once:
pinMode(greenLed,OUTPUT);
pinMode(redLed,OUTPUT);
pinMode(bluLed,OUTPUT);
digitalWrite(redLed,LOW);
digitalWrite(greenLed,LOW);
digitalWrite(bluLed,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
digitalWrite(redLed,HIGH);
delay(tempo);
digitalWrite(redLed,LOW);
digitalWrite(greenLed,HIGH);
delay(tempo);
digitalWrite(greenLed,LOW);
digitalWrite(bluLed,HIGH);
delay(tempo);
digitalWrite(bluLed,LOW);
}
