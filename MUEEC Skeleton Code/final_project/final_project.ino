/*
 MUEEC SKILLS WORKSHOP 
 basic structure for final task
 
brief:
    Nick wants his light system for inside his house to be connected to his security system. He really really needs someone to prototype it for him!
    
      
    He really really likes the soothing fading colours of RGB led's and wants when the alarm is activated to have the colours fade in an out! (kinda like your code from PWM)

    but when the alarm is triggered he wants a random colours blinking erratically to scare the offender off!

    note we will turn the alarm system on and off by pressing a push button, and the alarm will be triggered when the push button is held down!

    finally the speed of random erratic colours and the speed at which the rgb leds will fade colours should be controlled by a potentionmeter mounted on the wall! 
*/

                                                                          // remember to initialize all variables before all the other code and to set variables to constants if possible

void setup() {
                                                                          //  the setup code will go here
                                                                          //  serial communication for debugging of code is super helpful!
                                                                          //  remember to setup input/output pins
} 
              
void transition() {
                                                                          //  place the code here that will occur when we recognise a button press
                                                                          //  we will want to record the time of transition
                                                                          //  we will want to change the state variable
  }

void longPress() {
                                                                          //place code here you would like to occur when the button is held down
  }

 
void loop() {
                                                                          //  Read the button pin and store the state in value variable
                                                                          //  read trim pot and store value in a variable
  
 //~~~~~~~~~~~~~ did a button press event occur? ~~~~~~~~~~~~~~~~~~~~~~~
 
  if  (/*<condition statements go here>*/) {                              //  we need to check if the button has been pressed
      transition();                                                       //  if it has exectute the code that we want to occur when a button press occurs
    }  

 //~~~~~~~~~~~~~ lets either start or stop the program depending on previous state  ~~~~~~~~~~~~~~~~~   
 // think back to LED push button example (if (off) {turn on} else {turn off})
 
  if ( /* insert your condition statements here*/ ) {                     //  check if the alarm is armed
    
                                                                          //  if alarm not armed then lets start it up!
  } else {
                                                                          // if it is already armed lets turn it off.
    }

//~~~~~~~~~~~~~ is the button being held down?  ~~~~~~~~~~~~~~~~~~~~~~~
                                       
  if (/*<put your conditional statements here>*/) {                       //  if button has been held down.
      longPress();                                                        //activate alarm
    }     

    
                                                                          //  lets discard the old button state and store the current state for the future execution of main loop();

}
