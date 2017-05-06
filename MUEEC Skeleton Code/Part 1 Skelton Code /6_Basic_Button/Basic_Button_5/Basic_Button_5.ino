/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// *constants won't change. They're used here to set pin numbers:
// the number of the pushbutton pin
// the number of the LED pin

// *variables will change:
// variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:

  // initialize the pushbutton pin as an input:

  //lets open serial communications

  //tell the user what code is about to run and on which pin

}

void loop() {
  // read the state of the pushbutton value:

// check if the pushbutton is pressed.

// *if it is, the buttonState is HIGH:

// if <conditional statement>
    // turn LED on:
    //  print to the console button press event

//else
    // turn LED off:

  }
}
