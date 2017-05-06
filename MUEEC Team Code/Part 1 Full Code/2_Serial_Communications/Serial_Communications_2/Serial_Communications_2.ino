/*
  Blink and tell the serial monitor
  
  Turns on an LED on for one second, then off for one second, repeatedly.
  logs every event to the serial monitor
  
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  
  // Open Communications on COM port at a 9600 bits per second (baud)
  Serial.begin(9600);

  // Print something to the monitor
  Serial.println("Lets begin the blinking madness!");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);                 // turn the LED on (HIGH is the voltage level)
  Serial.println("Turning ON led");       // turning on the led so lets print it to the console
  delay(1000);                            // wait for a second
  
  digitalWrite(13, LOW);                  // turn the LED off by making the voltage LOW
  Serial.println("Turning OFF led");      // turning off the led so lets print it to the console
  delay(1000);                            // wait for a second
}