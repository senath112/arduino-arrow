/*
01 on                 on
02    on              on
03      on            on  
04        on          on
05          on        on
06            on      on
07              on    on
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3,HIGH);
Serial.print("-");
delay(500);
digitalWrite(4,HIGH);
Serial.print("-");
delay(500);
digitalWrite(5,HIGH);
Serial.print("-");
delay(500);
digitalWrite(6,HIGH);
Serial.print("-");
delay(500);
digitalWrite(7,HIGH);
Serial.print("-");
delay(500);
digitalWrite(10,HIGH);
Serial.print("-");
delay(500);
digitalWrite(9,HIGH);
Serial.print(">");
delay(500);
//------>
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
Serial.println();
delay(500);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
Serial.println("------>");
delay(500);

}
