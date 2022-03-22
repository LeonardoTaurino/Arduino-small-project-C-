int latchPin=11;
int clockPin=9;
int dataPin=12;
byte LEDs=0xFF;
byte cont=0xFF;
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
shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
digitalWrite(latchPin,HIGH);
Serial.println(LEDs,BIN);
LEDs=LEDs/2;
delay(tempo);
}
