int latchPin=11;
int clockPin=9;
int dataPin=12;
byte LEDs=0xFF; // in bin 1111-1111 quindi accendo tutti i LED

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchPin,LOW); //DATI IN ARRIVO
shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
digitalWrite(latchPin,HIGH);
}
