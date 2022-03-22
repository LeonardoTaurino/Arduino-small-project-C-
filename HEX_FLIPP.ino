int latchPin=11;
int clockPin=9;
int dataPin=12;
byte LEDs=0x01;
int tempo=250;
int var=0;

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
delay(tempo*2);
if(var==0){
LEDs=255-LEDs;
var=1;
}
}
