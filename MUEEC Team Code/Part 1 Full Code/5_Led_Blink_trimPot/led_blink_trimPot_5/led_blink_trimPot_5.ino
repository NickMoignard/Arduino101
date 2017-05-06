//MUEEC ARDUINO WORKSHOP
//lets blink an led and change the speed it blinks with a trim pot.

const int LED = 9;      //  intialize led pin, set as constant
const int trimPot = 0;  // trimPot is connected to ADC No.0 
int value = 0;          //  initialze variable to store value from trim pot


void setup () {         // *note analog pins are automatically defined as inputs
  
  pinMode(LED, OUTPUT); //set led pin as an output
  
  Serial.begin(9600);   //open serial communication at 9600 bits per second
}  
void loop () {          
  val = analogRead(0);  //read the trim pots value and store it
  
  //lets print some information to the serial monitor and make it nice and clear
  Serial.println("blinking every\t");
  Serial.print(val*2);
  Serial.print(" milliseconds");
  
  digitalWrite(LED, HIGH);  //turn the led on

  delay(val); //delay for a length determined by the trim pots value

  digitalWrite(LED, LOW); //turn off the led

  delay(val); //delay for a length determined by the trim pots value

}  
  

  
