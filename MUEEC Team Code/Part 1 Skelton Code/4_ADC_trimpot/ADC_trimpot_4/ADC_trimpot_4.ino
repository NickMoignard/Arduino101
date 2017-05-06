/*
Lets read a voltage from the arduinos Analog to Digital Convertors!

Lets connect the 10k Trim Pot to the 5V, Gnd and importantly to pin A0

Important note about the onboard ADC's. they are only used as inputs so we do not need to define this in the setup function
*/

//set constant variable for trimPot location (ADC number 0)


//create variable to store the trim pots value in

 
void setup() {

  // Open Communications on COM port at a 9600 bits per second (baud)


  // Print something to the monitor

}

void loop() {
  //read the voltage from trim pot and store it in the value variable

  //lets print this to the console

  //we better put in a delay otherwise our console is going to fill up very quickly
  //0.15secs delay
}
