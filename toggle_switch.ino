int LEDPin=8;
int senPin=12;
int buttonRead;
bool onf=LOW;
int tempo=100;
void setup() {
  // put your setup code here, to run once:
pinMode(LEDPin,OUTPUT);
pinMode(senPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead = digitalRead(senPin); 
digitalWrite(LEDPin,onf);
//Serial.println(buttonRead);
while(buttonRead==0){
  buttonRead = digitalRead(senPin);
  if(buttonRead==1){
    if(onf==LOW){
      onf=HIGH;
      }
      else{
        onf=LOW;
        }
    }
  }
delay(tempo);
}
