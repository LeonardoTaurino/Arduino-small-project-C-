char inputSu = 0;
char inputGiu = 0;
int ledPin=13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  inputSu= Serial.read();
  Serial.print(inputVar);
  Serial.print("\n");
  if(inputVar == '1')
    digitalWrite(13,HIGH);
    else if(inputVar == '0')
      digitalWrite(13,LOW);
    }      
}
