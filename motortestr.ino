int speedP=5;
int dirP1=4; 
int dirP2=3;
float mSpeed;
int potP=A0;
int potVal;
int buttonP=10;
int buttonRead;
bool dir1=LOW;
bool dir2=HIGH;
int sxP=12;
int dxP=13;
void setup() {
  // put your setup code here, to run once:
pinMode(speedP,OUTPUT);
pinMode(dirP1,OUTPUT);
pinMode(dirP2,OUTPUT);
pinMode(potP,INPUT);
pinMode(dxP,OUTPUT);
pinMode(sxP,OUTPUT);
pinMode(buttonP,INPUT);
digitalWrite(buttonP,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potP);
mSpeed=potVal*255./1023.;
buttonRead=digitalRead(buttonP);
Serial.println(buttonRead);
while(buttonRead==0){
  buttonRead=digitalRead(buttonP);
  if(buttonRead==1 && mSpeed<50){
    if (dir1==LOW){
      dir1=HIGH;
      dir2=LOW;
      }
      else{
      dir2=HIGH;
      dir1=LOW;      
        }
    }
  }
digitalWrite(dirP1,dir1);
digitalWrite(dirP2,dir2);
digitalWrite(sxP,dir1);
digitalWrite(dxP,dir2);


analogWrite(speedP,mSpeed);

Serial.println(mSpeed);
}
