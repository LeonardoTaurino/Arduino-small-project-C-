int speedPin = 9;
int dir1Pin = 5;
int dir2Pin = 6;
int speedVal=255;

void setup() {
  // put your setup code here, to run once:
pinMode(speedPin,OUTPUT);
pinMode(dir1Pin,OUTPUT);
pinMode(dir2Pin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dir1Pin,LOW);
digitalWrite(dir2Pin,HIGH);
analogWrite(speedPin,speedVal);
}
