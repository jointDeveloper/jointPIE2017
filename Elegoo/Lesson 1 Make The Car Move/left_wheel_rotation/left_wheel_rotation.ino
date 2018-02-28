//www.elegoo.com
//2016.06.13

/*In3 connected to the 8 pin, 
 In4 connected to the 9 pin, ENB pin 10,*/
int ENB=10; 
int IN3=8;
int IN4=9;
void setup()
{
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
  digitalWrite(ENB,HIGH);       
}
void loop()
{
  digitalWrite(IN3,HIGH);      
  digitalWrite(IN4,LOW);         //Left wheel forward
  delay(500);
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,LOW);         //Left wheel stop
  delay(500);
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,HIGH);         //Left wheel back
  delay(500);
  digitalWrite(IN3,LOW);      
  digitalWrite(IN4,LOW);         //Left wheel stop
  delay(500);
}

