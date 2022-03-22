#include <Servo.h>
int servoPin=9;
int servoPos=98;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:

myServo.write(servoPos);
delay(1000); 
myServo.write(140);
delay(1000);
myServo.write(93);
delay(1000);
myServo.write(40);
delay(1000);
}
