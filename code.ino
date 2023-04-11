int IR1 = 2;
int IR2 = 3;
int LED1 = 5;
int LED2 = 6;
int LDR = 7;


void setup() 
{
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(LDR, INPUT);
  
 
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void loop() {

  
  Serial.print("sensor = ");
  Serial.print(LDR);
  delay (500);

  if (digitalRead(LDR) == LOW)
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    Serial.println("It's Bright Outside; Lights status: OFF");
  }
  if ((digitalRead(LDR) ==  HIGH) && (digitalRead(IR1) == LOW)) 
    {
      digitalWrite(LED1, HIGH);
      Serial.println("It's Dark Outside; LED1 Lights status: ON");
      delay(2000);
    }
  
  if ((digitalRead(LDR) == HIGH) && (digitalRead(IR2) == LOW)) 
    {
      digitalWrite(LED2, HIGH);
      Serial.println("It's Dark Outside; LED2 Lights status: ON");
      delay(2000);
    }  
}