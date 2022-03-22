char inputVar = 0;
int ledPin=13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  inputVar= Serial.read();
  Serial.print(inputVar);
  Serial.print("\n");
  if(inputVar == 'UP')
    Serial.print("UP");
    Serial.print("\n");
}
    else {
      Serial.print("NOT UP");
      Serial.print("\n");
    }
          
}
