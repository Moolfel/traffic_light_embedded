// Author: Egide Niyomukiza

// Initialis the traffix 1
int red_traffic_1 = 11;
int green_traffic_1 = 13;
int yellow_traffic_1 = 12;

// Initalise the traffic 2
int red_traffic_2 = 10;
int green_traffic_2 = 9;
int yellow_traffic_2 = 8;

// Initialise the traffic 3
int red_traffic_3 = 7;
int green_traffic_3 = 6;
int yellow_traffic_3 = 5;

// Initialise the traffic 4
int red_traffic_4 = 2;
int green_traffic_4 = 3;
int yellow_traffic_4 = 4;

// Initialise the traffic 5
int red_traffic_5 = A0;
int green_traffic_5 = A1;
int yellow_traffic_5 = A2;


void setup() {
  // Set all pins as output
  pinMode(red_traffic_1, OUTPUT);
  pinMode(green_traffic_1, OUTPUT);
  pinMode(yellow_traffic_1, OUTPUT);
  
  pinMode(red_traffic_2, OUTPUT);
  pinMode(green_traffic_2, OUTPUT);
  pinMode(yellow_traffic_2, OUTPUT);
  
  pinMode(red_traffic_3, OUTPUT);
  pinMode(green_traffic_3, OUTPUT);
  pinMode(yellow_traffic_3, OUTPUT);
  
  pinMode(red_traffic_4, OUTPUT);
  pinMode(green_traffic_4, OUTPUT);
  pinMode(yellow_traffic_4, OUTPUT);

  pinMode(red_traffic_5, OUTPUT);
  pinMode(green_traffic_5, OUTPUT);
  pinMode(yellow_traffic_5, OUTPUT);
}

// Endless loop
void loop() {
  digitalWrite(red_traffic_1, LOW);   
  digitalWrite(green_traffic_1, HIGH);
  digitalWrite(yellow_traffic_1, LOW);
  
  digitalWrite(red_traffic_2, HIGH);
  digitalWrite(green_traffic_2, LOW);   
  digitalWrite(yellow_traffic_2, LOW);
  
  digitalWrite(red_traffic_3, LOW);
  digitalWrite(green_traffic_3, HIGH);
  digitalWrite(yellow_traffic_3, LOW);   
  
  digitalWrite(red_traffic_4, HIGH);
  digitalWrite(green_traffic_4, LOW);
  digitalWrite(yellow_traffic_4, LOW);

  analogWrite(red_traffic_5, HIGH);
  analogWrite(green_traffic_5, LOW);
  analogWrite(yellow_traffic_5, LOW);
  
  delay(1000);                
  
  digitalWrite(red_traffic_1, HIGH);   
  digitalWrite(green_traffic_1, LOW);
  digitalWrite(yellow_traffic_1, LOW);
  
  digitalWrite(red_traffic_2, LOW);
  digitalWrite(green_traffic_2, HIGH);   
  digitalWrite(yellow_traffic_2, LOW);
  
  digitalWrite(red_traffic_3, HIGH);
  digitalWrite(green_traffic_3, LOW);
  digitalWrite(yellow_traffic_3, LOW);  
  
  digitalWrite(red_traffic_4, LOW);
  digitalWrite(green_traffic_4, HIGH);
  digitalWrite(yellow_traffic_4, LOW);

  analogWrite(red_traffic_5, LOW);
  analogWrite(green_traffic_5, HIGH);
  analogWrite(yellow_traffic_5, LOW);
  
  delay(2000);                      

  digitalWrite(red_traffic_1, LOW);  
  digitalWrite(green_traffic_1, HIGH);
  digitalWrite(yellow_traffic_1, LOW);
  
  digitalWrite(red_traffic_2, HIGH);
  digitalWrite(green_traffic_2, LOW);  
  digitalWrite(yellow_traffic_2, LOW);
  
  digitalWrite(red_traffic_3, LOW);
  digitalWrite(green_traffic_3, HIGH);
  digitalWrite(yellow_traffic_3, LOW); 
  
  digitalWrite(red_traffic_4, HIGH);
  digitalWrite(green_traffic_4, LOW);
  digitalWrite(yellow_traffic_4, LOW);

  analogWrite(red_traffic_5, HIGH);
  analogWrite(green_traffic_5, LOW);
  analogWrite(yellow_traffic_5, LOW);
  
  delay(2000);    

  digitalWrite(red_traffic_1, LOW);  
  digitalWrite(green_traffic_1, HIGH);
  digitalWrite(yellow_traffic_1, LOW);
  
  digitalWrite(red_traffic_2, HIGH);
  digitalWrite(green_traffic_2, LOW);  
  digitalWrite(yellow_traffic_2, LOW);
  
  digitalWrite(red_traffic_3, LOW);
  digitalWrite(green_traffic_3, HIGH);
  digitalWrite(yellow_traffic_3, LOW); 
  
  digitalWrite(red_traffic_4, HIGH);
  digitalWrite(green_traffic_4, LOW);
  digitalWrite(yellow_traffic_4, LOW);

  analogWrite(red_traffic_5, HIGH);
  analogWrite(green_traffic_5, LOW);
  analogWrite(yellow_traffic_5, LOW);
  
  delay(2000); 
}
