/*
Lets read a voltage from the arduinos Analog to Digital Convertors!

Lets connect the 10k Trim Pot to the 5V, Gnd and importantly to pin A0

Important note about the onboard ADC's. they are only used as inputs so we do not need to define this in the setup function
*/

//set constant variable for trimPot location (ADC number 0)
const int trimPot = 0;

//create variable to store the trim pots value in
int value = 0;
 
void setup() {

  // Open Communications on COM port at a 9600 bits per second (baud)
  Serial.begin(9600);

  // Print something to the monitor
  Serial.println("Lets begin reading the voltage on Pin A0");
}

void loop() {
  //read the voltage from trim pot and store it in the value variable
  value = analogRead(trimPot);
  //lets print this to the console
  Serial.println(value);
  //we better put in a delay otherwise our console is going to fill up very quickly
  delay(150); //0.15secs delay
}
