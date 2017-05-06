//set constant led pin
//set constant button pin

//initialize variables used in code *we will need three different variables (old value, current value and the state of the led)

void setup() {
  //set pin modes for microcontroller
  
  // open serial communications at 9600 baud
  // print to the serial monitor
}

void loop() {
//read the signal from the button pin store as current value
  
//  insert a conditional checking for a button press ~~~~~~~~

  if (/*insert conditionals*/) {            // check for a transition, i.e OFF state to ON state!
      //swap state variable from 1 to 0 or 0 to 1
      //include small delay inorder to debounce physical switch
      //print to the serial monitor
// nested conditional to determine if led should be turned on or off!
      if ( /*insert conditional*/ ) {                             // check our value that will tell us to turn on or off the led
            //turn on the led
            // print to the serial monitor
        } else {
            //turn off the led    
        } 
  }     
// discard old value and store the current value
}
