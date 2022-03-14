int blueLED=9;
int greenLED=10;
int redLED=11;
int OneSec=1000;


void setup() {
  
  pinMode(blueLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  
  
  
}

void loop() {
   analogWrite(blueLED,255);
  delay(OneSec);
  
  analogWrite(blueLED,102);
  delay(OneSec);
  
  analogWrite(blueLED,0);
  delay(OneSec);
  
      analogWrite(greenLED,255);
  delay(OneSec);
  
  analogWrite(greenLED,102);
  delay(OneSec);
  
  analogWrite(greenLED,0);
  delay(OneSec);
  
    analogWrite(redLED,255);
  delay(OneSec);

  analogWrite(redLED,102);
  delay(OneSec);
  
  analogWrite(redLED,0);
  delay(OneSec);

}
