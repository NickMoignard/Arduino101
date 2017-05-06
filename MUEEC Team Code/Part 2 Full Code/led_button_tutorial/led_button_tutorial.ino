const int LED = 12;                                 //set led pin
const int BUTTON = 11;                              //set button pin

                                                    //initialize variables used in code
int val = 0;                                      
int old_val = 0;
int state = 0;

void setup() {
  pinMode(LED, OUTPUT);                             //set pin modes for microcontroller
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);                               // open serial communications at 9600 baud
  Serial.println("Program Starting!");              // print to the serial monitor
}

void loop() {
  val = digitalRead(BUTTON);                          //read the signal from the button pin
  
//  insert a conditional checking for a button press ~~~~~~~~

  if ((val == HIGH) && (old_val == LOW)) {            // check for, off state to on state!
      state = 1 - state;                              //swap state variable from 1 to 0 or 0 to 1
      delay(50);                                      //include small delay inorder to debounce physical switch
      Serial.println("Button Press Registered");      // print to the serial monitor
// nested conditional to determine if led should be turned on or off!
      if ( state == 1 ) {                             // check our value that will tell us to turn on or off the led
            digitalWrite(LED, HIGH);                   //if state == 1 then we will set the new led brightness
            Serial.println("Turning LED on");         // print to the serial monitor
        } else {
            digitalWrite(LED, LOW);                    //if state == 0 then we will turn off the led 
            Serial.println("Turning LED off");        // print to the serial monitor
        } 
  }     
  old_val = val;                                      // discard old_val and store the current value
}
