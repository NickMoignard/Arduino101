const int LED = 11; //pin 11 is able to produce a PWM wave
int speedOfFade = 10; //lets set the delays in code to 10 milliseconds


void setup() {
 //lets set pin mode
 pinMode(LED, OUTPUT);

 //lets open serial communications
 Serial.begin(9600);

 //tell the user what code is about to run and on which pin
 Serial.println("Lets PWM an led on pin number 11");
}

void loop() {
  
  //we will use 2 for loops to have the led go up in brightness and then down again in brightness. allowing the pleasant led blinking
  //lets turn up brightness!
  for (int i = 0; i < 255; i++){
    
      //lets call the analogWrite function, we will set the value of the index as the brightness
      analogWrite(LED, i);
      
      //lets control the speed of this function by using a delay
      delay(speedOfFade);
    }
    
   //lets turn down the brightness
   for (int i = 0; i < 255; i++){
    
      //lets call the analogWrite function, BUT we will set the brightness to 255 minus the index value
      analogWrite(LED, (255 - i) );
      
      //lets control the speed of this function by using a delay
      delay(speedOfFade);
    }  
  }

