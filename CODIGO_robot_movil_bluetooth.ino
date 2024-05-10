#include <SoftwareSerial.h>
SoftwareSerial bluetooth(A0,A1);
char dato;
void setup() 
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  bluetooth.begin(9600);
}

void loop() 
{
  dato = bluetooth.read();
  delay(100);
  if(dato=='0')//PARAR
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
  if(dato=='1')//AVANZA
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
  }
  if(dato=='2')//DERECHA
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
  if(dato=='3')//ATRAS
  {
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
  }
  if(dato=='4')//IZQUIERDA
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
  }
}
