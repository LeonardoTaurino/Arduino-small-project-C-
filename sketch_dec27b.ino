int PinLettSuono=A1;
//int pinXX=3;
float lettura;
float XX;
void setup() {
  // put your setup code here, to run once:
pinMode(PinLettSuono, INPUT);
//pinMode(pinXX, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lettura = analogRead(PinLettSuono);
Serial.println(lettura);
delay(50);
}
