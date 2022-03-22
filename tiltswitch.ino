int tiltPin=2;
int tiltVal;
int redPin=8;
int greenPin=4;
int tempo=250;
int LedOnf(int R, int G, bool Rof, bool Gof){
  digitalWrite(R,Rof);
  digitalWrite(G,Gof);
  }
void setup() {
  // put your setup code here, to run once:
pinMode(tiltPin,INPUT);
digitalWrite(tiltPin,HIGH);
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal);
delay(tempo);
if(tiltVal==1){
  LedOnf(redPin,greenPin,HIGH,LOW);
  }
  else{
    LedOnf(redPin,greenPin,LOW,HIGH);
    }

}
