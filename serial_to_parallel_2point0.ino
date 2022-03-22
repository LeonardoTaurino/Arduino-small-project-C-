int latchPin=11;
int clockPin=9;
int dataPin=12;
byte LED1=0x55; // in bin 1111-1111 quindi accendo tutti i LED
byte LED2=0xAA;
int tempo=250;
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
shiftOut(dataPin,clockPin,LSBFIRST,LED1);
digitalWrite(latchPin,HIGH);
delay(tempo);
digitalWrite(latchPin,LOW); //DATI IN ARRIVO
shiftOut(dataPin,clockPin,LSBFIRST,LED2);
digitalWrite(latchPin,HIGH);
delay(tempo);
}
