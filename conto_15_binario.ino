int pin_A=8;
int pin_B=7;
int pin_C=4;
int pin_D=2;
int val_A=LOW;
int val_B=LOW;
int val_C=LOW;
int val_D=LOW;
int tempo=500;
bool cond= true;
void setup() {
  // put your setup code here, to run once:
pinMode(pin_A, OUTPUT);
pinMode(pin_B, OUTPUT);
pinMode(pin_C, OUTPUT);
pinMode(pin_D, OUTPUT);
digitalWrite(pin_A,val_A);
digitalWrite(pin_B,val_B);
digitalWrite(pin_C,val_C);
digitalWrite(pin_D,val_D);
delay(tempo);
}
void loop() {
  digitalWrite(pin_A,val_A);
  digitalWrite(pin_B,val_B);
  digitalWrite(pin_C,val_C);
  digitalWrite(pin_D,val_D);
  cond=true;
  if (val_A==LOW && cond==true){
    val_A=HIGH;
    cond=false;
    }
  if (val_A==HIGH && val_B==LOW && cond==true){
    val_A=LOW;
    val_B=HIGH;
    cond=false;
    }
  if (val_A==HIGH && val_B==HIGH && val_C==LOW && cond==true){
    val_A=LOW;
    val_B=LOW;
    val_C=HIGH;
    cond=false;
    }
  if (val_A==HIGH && val_B==HIGH && val_C==HIGH && val_D==LOW && cond==true){
    val_A=LOW;
    val_B=LOW;
    val_C=LOW;
    val_D=HIGH;
    cond=false;
    }
  if (val_A==HIGH && val_B==HIGH && val_C==HIGH && val_D==HIGH && cond==true){
    val_A=LOW;
    val_B=LOW;
    val_C=LOW;
    val_D=LOW;
    cond=false;
    }
    delay(tempo);
}
