int trP=12;
int ecP=11;
int pingTimeTravel;
float dist;
void setup() {
  // put your setup code here, to run once:
pinMode(trP,OUTPUT);
pinMode(ecP,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trP,LOW);
delayMicroseconds(10);
digitalWrite(trP,HIGH);
delayMicroseconds(10);
digitalWrite(trP,LOW);
pingTimeTravel=pulseIn(ecP,HIGH);
delay(25);
dist=pingTimeTravel*0.0343/2;
Serial.print("time traveled [ms]= ");
Serial.print(pingTimeTravel);
Serial.print(" Distanza [cm]= ");
Serial.println(dist);
}
