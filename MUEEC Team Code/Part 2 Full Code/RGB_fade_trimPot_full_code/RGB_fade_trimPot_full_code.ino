
//  set constants
const int red = 11;                                         //  red diode pin                  
const int green = 10;                                       //  green diode pin
const int blue = 9;                                         //  blue diode pin

// initialize variables
int colourUp = red;                                         //  colourUp will start with red
int colourDown = green;                                     //  colourDown will start with greed
int colourOff = blue;                                       //  unused colour will start with blue
int speedOfFade = 5;                                        //  set the delay length to be something small like 5 - 50 milliseconds
int brightness;                                             //  brightness counter variable
int temp;                                                   //  temporary storage variable for the shuffling of colours


void setup() {
  
//  set pinModes 
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

  Serial.begin(9600);                                       //  Open Serial communications
  Serial.println("Starting Program");                       //  print somehting to the console
}

//  create a reset and swap function.  
void resetAndSwap() {                                       //  reset and swap function
    brightness = 0;                                         //  reset counter at zero
    Serial.println("Changing Colours");                     //  print to the monitor
    
//shuffle colours around in variables                                                      
    temp = colourOff;                                       //  move the unused colour into temporary variable 
    colourOff = colourDown;                                 //  store the colour at zero brightness in colour off variable
    colourDown = colourUp;                                  //  store the colour at full brightness in colour down variable
    colourUp = temp;                                        //  move the prevoiusly unused colour from temporary variable into colourUp variable        
}
  
void loop() {
  brightness++;                                             //  increment brightness counter

  if (brightness > 255) {                                   //  check if brightness counter is greater than 255, if so reset and swap colours
      resetAndSwap();                                           //  execute the resetAndSwap function since the counter has reached 255
  }
  analogWrite(colourUp, brightness);                        //  call analogWrite *note colour1 is going up in brightness
  analogWrite(colourDown, (255-brightness));                //  call analofWrite *note color2 will be going down in brightness
  delay(speedOfFade);                                       //  lets include a delay
}

