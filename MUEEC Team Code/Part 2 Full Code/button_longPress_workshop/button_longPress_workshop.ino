//Arduino Workshop

//turn on an led when a push button is held down

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//initilize variables to remain constant throughout run time of program
const int LED = 12;     //led pin number
const int BUTTON = 11;   //push button pin number

//initialize variables that will change as program runs
int val = 0;      //stores current push button value
int old_val = 0;  //stores the directly previous push button value in order to determine when tranistions occur
unsigned long startTime = 0; //create a variable to store the length of time a button is held down

void setup() {              //  Setup code goes inside this function, to run once.
    pinMode(LED, OUTPUT);   //  Specify the pin connected to led as an OUTPUT for the microcontroller.
    pinMode(BUTTON, INPUT); //  Specify the pin connected to the push button as an INPUT for the microcontroller.
}

void loop() {                   //The main code will goe here, this function will run indefinately until microcontroller is turned off.
    val = digitalRead(BUTTON);  //Read the button pin and store the state in value variable

    if ( (val == HIGH) && (old_val==LOW) ){ //check for a transition of pin sevens voltage
        
        startTime = millis(); //calls the millis function, will return the number of milliseconds since the microcontroller was turned on.
        delay(50);  //we will include a delay of 50 milliseconds in order to counter act the bouncing effect of the push-button.
    

    } else if ((val == HIGH)&&( old_val == HIGH) && ((millis() - startTime) > 100)) {  //if the button is being held down and it has been held down for longer than 500 milliseconds then...
          digitalWrite(LED, HIGH);    //turn led on
    } else {
          digitalWrite(LED, LOW);     //keep led off if button is not being held down.
      }
    
      
    old_val = val;  //since we have checked old_val against current val, lets discard old_val and make the current val the new old_val.
}
