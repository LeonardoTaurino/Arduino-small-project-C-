#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int N1=0;
int N2=0;
String N1S;
String N2S;
int tempo=2000;
int opr=0;
String msg;
int tot;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int lcdfun(String lin1,String lin2){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(lin1);
  lcd.setCursor(0,1);
  lcd.print(lin2);  
  }
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Inserire N1= ");
  lcd.setCursor(0,1);
  lcd.print("Inserire N2= "); 
  
Serial.print("N1= ");
while(N1==0){
  N1=Serial.parseInt();
  }
  Serial.println(N1);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(N1);
  lcd.setCursor(0,1);
  lcd.print("Inserire N2= "); 
delay(tempo*0.5);
Serial.print("N2= ");
while(N2==0){
  N2=Serial.parseInt();
  }
  Serial.println(N2);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(N1);
  lcd.setCursor(0,1);
  lcd.print(N2); 

delay(tempo);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Scegli operatore: ");
lcd.setCursor(0,1);
lcd.print("1)+ 2)- 3)* 4)/");

Serial.println("operatore= ");
while(opr==0){
    opr=Serial.parseInt();
  }
  Serial.println(opr);

if (opr==1){
  tot=N1+N2;
  msg="N1 + N2 = ";
  }
if (opr==2){
  tot=N1-N2;
  msg="N1 - N2 = ";
  }
if (opr==3){
  tot=N1*N2;
  msg="N1 * N2 = ";
  }
if (opr==4){
  tot=N1/N2;
  msg="N1 / N2 = ";
  }
if(opr!=1  && opr!=2 && opr!=3 && opr!=4){
  tot=4061;
  msg="ERRORE ";
  }  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(msg);
  lcd.setCursor(0,1);
  lcd.print(tot); 
delay(tempo*2); 
N1=0;
N2=0;
opr=0;


}
