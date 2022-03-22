int buzzPin=12;
int potPin=A0;
int potVal;
int tempo=500;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin,OUTPUT);
pinMode(potPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  delay(tempo*0.5);
//potVal=Serial.parseInt();
Serial.println(potVal);
if(potVal>=1000){
  digitalWrite(buzzPin,HIGH);
  delay(tempo*0.5);
  digitalWrite(buzzPin,LOW);
  }
  else{
    digitalWrite(buzzPin,LOW);
    }

}
