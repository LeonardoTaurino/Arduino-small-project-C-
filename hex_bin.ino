int Dec=0;
byte Bit=B00000000;
byte Hex=0x00;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Dec= ");
Serial.print(Dec);
Serial.print("  ||  ");
Serial.print("Bin= ");
Serial.print(Bit,BIN);
Serial.print("  ||  ");
Serial.print("Hex= ");
Serial.println (Hex,HEX);
Dec++;
Bit++;
Hex++;
delay(500);
}
