/* Blink without Delay

 Turns on and off a light emitting diode (LED) connected to a digital
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.

 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 
 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 modified 11 Nov 2013
 by Scott Fitzgerald
 
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// *constants won't change. Used here to set a pin number :
  // the number of the LED pin

// *Variables will change :
  // ledState used to set the LED

// *Generally, you should use "unsigned long" for variables that hold time
// *The value will quickly become too large for an int to store
   // store last time LED was updated

// *constants won't change :
   // interval at which to blink (milliseconds)

void setup() {
  //  set the digital pin as output:
  //  open serial communications
}

void loop()
{
  
  // *check to see if it's time to blink the LED; that is, if the
  // *difference between the current time and last time you blinked
  // *the LED is bigger than the interval at which you want to
  // *blink the LED.
  
 //call the millis() function and  store in variable
 
  if(/*conditional statments*/) {
    // save the last time you blinked the LED 
    
    // *if the LED is off turn it on and vice-versa:
    if (/*led is off*/)
      //turn on
    else
      //turn off

    // *set the LED with the ledState of the variable:
    //  call digitalWrite()
  }
}

