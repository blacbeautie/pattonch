int testled = 13;     // LED on teensy is at pin 13.


void setup() {    // put your setup code here, to run once:
  
  pinMode(testled, OUTPUT);
  
  digitalWrite(testled, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                  // wait for a second
  digitalWrite(testled, LOW);   // turn the LED off by making the voltage LOW
  delay(1000); 

  for (int i = 1; i <= 2; i++) {
    digitalWrite(testled, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(100);                  // wait for a second
    digitalWrite(testled, LOW);   // turn the LED off by making the voltage LOW
    delay(100);                   // wait for a second
 }
 Serial.begin(9600);
 Serial.println("Setup completed successfully!");
}

void loop() {     // put your main code here, to run repeatedly:

   
}
