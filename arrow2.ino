/*
created 19 Oct 2022
 by Senath Sethmika
modified by 
  Abinu Ranumitha
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);
Serial.print("-");
delay(400);
digitalWrite(3,HIGH);
Serial.print("-");
delay(400);
digitalWrite(4,HIGH);
Serial.print("-");
delay(400);
digitalWrite(5,HIGH);
Serial.print("-");
delay(400);
digitalWrite(6,HIGH);
Serial.print("-");
delay(400);
digitalWrite(7,HIGH);
Serial.print("-");
delay(400);

//------>
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);

Serial.println();
delay(300);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);

Serial.println("------>");
delay(200);
 digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
}
