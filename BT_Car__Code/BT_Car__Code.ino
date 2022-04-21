#define in1 12
#define in2 11
#define in3 10
#define in4 9
#define led1 2
#define led2 3
#define red 4
#define green 5
#define blue 6
#define buz 13

char data;

void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(buz,OUTPUT);
  myserial.begin(9600);
  Serial.begin(9600);
}

void loop() 
{
  while (myserial.available()) 
  {
     data = myserial.read();
     Serial.print(data);
     Serial.println();
  }
  Serial.println(data);
  delay(200);
  if (data == 'F' || data == 'U') 
  {
    //Set Motorbackward
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    
  }
  else if (data == 'B' || data == 'u') 
  {
    // Set Motor forward
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    
  }
 
  else if (data == 'L') 
  { 
    //LEFT move
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    
  }
   
  else if (data == 'k') 
  { 
    //right TURN
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    
  }
  else if (data == 'R') 
  {
    //RIGHT move
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in4, LOW);
    digitalWrite(in3, HIGH);
    
  }
  ////////////////led
  else if (data == 'E' || data == 'D') 
  {
    //led on
    digitalWrite(led1, HIGH);
    digitalWrite(led2,HIGH);
  }
   else if (data == 'e' || data == 'd') 
  {
    //led off
    digitalWrite(led1, LOW);
    digitalWrite(led2,LOW);
  }

  else if (data == 'A') 
  {
    //buzzer on
    digitalWrite(buz,HIGH);
  
  }
  else if (data == 'a') 
  {
    //buzzer on
    digitalWrite(buz,LOW);
  
  }
  else if (data == 'C' ) 
  {
    //RGB
    digitalWrite(red, HIGH);
    delay(50);
    digitalWrite(red,LOW);
    delay(50);
    digitalWrite(green,HIGH);
    delay(50);
    digitalWrite(green,LOW);
    delay(50);
    digitalWrite(blue,HIGH);
    delay(50);
    digitalWrite(blue,LOW);
    delay(50);
  }
  else if (data == 'c' ) 
  {
    //RGB
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
    
  }
    else if (data == 'l') 
  {
    //left move
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    
  }
    else if (data == 'X')
  {
    //STOP
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    
  }
}

  
