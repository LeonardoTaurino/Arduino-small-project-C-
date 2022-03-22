int pinR=8;
int pinG=4;
int pinB=2;
String myColor;
String msg="Scegli colore: ";
int pinBUZZ=12;
int tempo=250;
int var;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinR,OUTPUT);
pinMode(pinB,OUTPUT);
pinMode(pinG,OUTPUT);
pinMode(pinBUZZ,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
var=0;
Serial.println(msg);
digitalWrite(pinBUZZ,255);
delay(tempo);
digitalWrite(pinBUZZ,LOW);
while(Serial.available()==0){}
myColor=Serial.readStringUntil('\n');
if(myColor == "red")
{
  digitalWrite(pinR,255);
  digitalWrite(pinB,0);
  digitalWrite(pinG,0);
  var=1;
  }
if(myColor == "blue")
{
  digitalWrite(pinR,0);
  digitalWrite(pinB,255);
  digitalWrite(pinG,0);
  var=1;
  }
if(myColor == "green")
{
  digitalWrite(pinR,0);
  digitalWrite(pinB,0);
  digitalWrite(pinG,255);
  var=1;
  }
if(myColor == "pink")
{
  digitalWrite(pinR,255);
  digitalWrite(pinB,255);
  digitalWrite(pinG,0);
  var=1;
  }
if(myColor == "yellow")
{
  digitalWrite(pinR,255);
  digitalWrite(pinB,0);
  digitalWrite(pinG,255);
  var=1;
  }  
if(myColor == "azure")
{
  digitalWrite(pinR,0);
  digitalWrite(pinB,255);
  digitalWrite(pinG,255);
  var=1;
  }
if(myColor == "white")
{
  digitalWrite(pinR,255);
  digitalWrite(pinB,255);
  digitalWrite(pinG,255);
  var=1;
  }
if(myColor == "off")
{
  digitalWrite(pinR,0);
  digitalWrite(pinB,0);
  digitalWrite(pinG,0);
  var=1;

  }   
if (var==0){
  digitalWrite(pinR,200);
  digitalWrite(pinB,50);
  digitalWrite(pinG,50);
  delay(tempo);
    digitalWrite(pinR,0);
  digitalWrite(pinB,0);
  digitalWrite(pinG,0);
  Serial.println("Nessun colore trovato!");
  digitalWrite(pinBUZZ,HIGH);
  delay(tempo*0.8);
  digitalWrite(pinBUZZ,LOW);
  delay(tempo*0.8);
  digitalWrite(pinBUZZ,HIGH);
  delay(tempo*0.8);
  digitalWrite(pinBUZZ,LOW);
  delay(tempo*0.8);
  }
}
