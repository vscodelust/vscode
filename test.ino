String j;
int i=0;
void setup() {
  Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
  Serial.println("enter option");
while(Serial.available()==0)
{
}
j=Serial.readString();
Serial.println(j);
if(j=="1")
digitalWrite(13,HIGH);
else if(j=="2")
digitalWrite(13,LOW);
else if(j=="3")
digitalWrite(12,HIGH);
else if(j=="4")
digitalWrite(12,LOW);
else if(j=="*on#")
digitalWrite(11,HIGH);
else if(j=="*of#")
digitalWrite(11,LOW);
else if(j=="7")
digitalWrite(10,HIGH);
else if(j=="8")
digitalWrite(10,LOW);
else if(j=="*lights#")
digitalWrite(9,HIGH);
else if(j=="*light#")
digitalWrite(9,LOW);
else if(j=="*fans#")
digitalWrite(8,HIGH);
else if(j=="*fan#")
digitalWrite(8,LOW);
else if(j=="*music#")
digitalWrite(7,HIGH);
else if(j=="*music stop#")
digitalWrite(7,LOW);
else if(j=="*power up#")
digitalWrite(6,HIGH);
else if(j=="*power#")
digitalWrite(6,LOW);
else if(j=="*freak out#"){
  while(i<=5){
    digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(1000);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  i++;
  }
}
}
