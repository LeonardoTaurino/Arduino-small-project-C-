char inputSu;
byte inputGiu = 0;
byte inputVar;
int ledPin=13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  inputVar = Serial.read();
  Serial.print(inputVar, HEX);
  Serial.print("\n");
  //delay(3000);  
    }      
}
