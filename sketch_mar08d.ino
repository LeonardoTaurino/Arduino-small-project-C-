int latchPin=11;
int clockPin=9;
int dataPin=12;
byte LEDs=0x55;
byte cont=0x00;
int tempo=250;
int var;
int i;
int j=0;
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
if(j<=7){
for(i=j; i<=7; i++){
  var=bitRead(LEDs,i);
  if(var==0){
    bitWrite(cont, (i+1), 0);
    } else {
      bitWrite(cont, (i+1), 1);
      }    
}
LEDs=cont;
j++;
cont=0x00;
delay(tempo*0.5);
}

//Serial.println(bitRead(LEDs,1));
//Serial.println(bitWrite(LEDs,0,0),);

}
