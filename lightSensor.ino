int pinVol=A0;
int pinR=8;
int pinG=2;
int lightVal;
int tempo=250;
int MaxLig=600;
int buzzPin=7;
void setup() {
  // put your setup code here, to run once:
pinMode(pinVol,INPUT);
pinMode(pinR,OUTPUT);
pinMode(pinG,OUTPUT);
pinMode(buzzPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(pinVol);
Serial.println(lightVal);
if(lightVal>MaxLig){
    digitalWrite(pinR,HIGH);
    digitalWrite(pinG,LOW);
    digitalWrite(buzzPin,HIGH);
    delay(1000);

  } 
  else{
  digitalWrite(pinG,HIGH);
    digitalWrite(pinR,LOW);    
    delayMicroseconds(lightVal);
    digitalWrite(buzzPin,LOW);
    delay(lightVal);
    
    }
delay(tempo);
}
