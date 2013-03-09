
 int sensorPin = A0;
int sensorValue;


void setup(){

  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  }


void loop(){

   sensorValue = analogRead(sensorPin);

  Serial.println(sensorValue); 
  
  if ((sensorValue >0) && (sensorValue <200))
  
  {
   digitalWrite (9,HIGH);
  digitalWrite (10,LOW);
 digitalWrite (11,LOW); 
   
  }
  
  if ((sensorValue >200) && (sensorValue <900))
  
  {
    digitalWrite (9,LOW);
  digitalWrite (10,HIGH);
 digitalWrite (11,LOW); 
    
   
  }

  if ((sensorValue >900) && (sensorValue <1023))
  
  {
   digitalWrite (9,LOW);
  digitalWrite (10,LOW);
 digitalWrite (11,HIGH); 
    
    
  }

  delay(1);
}
