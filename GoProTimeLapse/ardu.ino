/*
  GoProTimeLapse
  Turns on gopro on, let the gopro to take a pic and turn off, repeatedly.
Wiring:
GoPro HERO BUS 12 PIN to PIN 13, HERIO BUS 30 PIN to PIN GROUND
REMEMBER TO COPY AUTOEXEC.ASH TO THE CAMERA!
REMEMBER TO CHANGE X BY THE SECONDS OF THE INTERVAL
*/
void setup() {                
  // initialize the digital pin as an output.
 
  pinMode(13, OUTPUT);     
}

void loop() {
  digitalWrite(13, HIGH);   // set the gopro on
  delay(3000);              // wait for 3 second to turn on
  digitalWrite(13, LOW);    
  delay(X6);              // Set the interval the of the pics + 6 seconds, the time a gopro takes to shoot a picture...
}
