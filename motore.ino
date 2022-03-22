#include <Stepper.h>
int motSpeed=10;
int stepsPerRevolution=2048;
int tempo=500;
Stepper myStepper(stepsPerRevolution, 8 , 10, 9, 11);
void setup() {
  // put your setup code here, to run once:11
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(stepsPerRevolution);
delay(tempo);
myStepper.step(-stepsPerRevolution);
delay(tempo);
}
