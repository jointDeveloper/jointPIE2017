//www.elegoo.com
//2016.06.13

/*In1 connected to the 6 pin, 
 In2 connected to the 7 pin, ENA pin 5,*/
int ENA=5; 
int IN1=6;
int IN2=7;
void setup()
{
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  digitalWrite(ENA,HIGH);       
}
void loop()
{
  digitalWrite(IN1,HIGH);      
  digitalWrite(IN2,LOW);         //Right wheel forward
  delay(500);
  digitalWrite(IN1,LOW);      
  digitalWrite(IN2,LOW);         //Right wheel stop
  delay(500);
  digitalWrite(IN1,LOW);      
  digitalWrite(IN2,HIGH);         //Right wheel back
  delay(500);
  digitalWrite(IN1,LOW);      
  digitalWrite(IN2,LOW);         //Right wheel stop
  delay(500);
}

