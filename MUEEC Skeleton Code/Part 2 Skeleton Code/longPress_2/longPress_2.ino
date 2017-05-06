//Arduino Workshop

//turn on an led when a push button is held down

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//initilize variables to remain constant throughout run time of program
    //led pin number
    //push button pin number

//initialize variables that will change as program runs
    //stores current push button value
    //stores the directly previous push button value in order to determine when tranistions occur
    //create a variable to store the length of time a button is held down

void setup() {              //  Setup code goes inside this function, to run once.
    //  Specify the pin connected to led as an OUTPUT for the microcontroller.
    //  Specify the pin connected to the push button as an INPUT for the microcontroller.
}

void loop() {                   //The main code will goe here, this function will run indefinately until microcontroller is turned off.
    //Read the button pin and store the state in value variable

    if ( /*insert conditionals*/ ){ //check for a transition of pin sevens voltage
        
        //call the millis function and store the result, it will return the number of milliseconds since the microcontroller was turned on.
        //we will include a delay of 50 milliseconds in order to counter act the bouncing effect of the push-button.
    
    //if the button is being held down and it has been held down for longer than 500 milliseconds then...
    } else if (/*conditionals*/ && (/*conditional to check for length of time passing since transition*/) {  
          //turn led on
    } else {
          //keep led off if button is not being held down.
      }
    
      
    //since we have checked old_val against current val, lets discard old_val and make the current val the new old_val.
}
