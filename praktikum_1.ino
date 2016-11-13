/* PRAKTIKUM 1 ANGGRIAN Q (4211511013) */

int led=13;

void setup() 
{
 pinMode(led,OUTPUT);
}

void loop() 
{
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
