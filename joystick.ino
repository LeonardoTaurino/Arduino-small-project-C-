int Xpin=A1;
int Ypin=A0;
int Spin=2;
int Xval;
int Yval;
int Sval;
int tempo=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);
digitalWrite(Spin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Sval=digitalRead(Spin);
delay(tempo);
Serial.println("-----------------");
Serial.print("X val= ");
Serial.println(Xval);
Serial.print("Y val= ");
Serial.println(Yval);
Serial.print("S val= ");
Serial.println(Sval);
}
