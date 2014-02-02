//
// Turn on the gopro camera is there is light hitting a LED. Great for sunrise timelapses
// You will need to wire up your components as such:
//
//           + digital2
//           |
//           <
//           > 100 ohm resistor
//           <
//           |
//           |
//         -----
//          / \  LED, maybe a 5mm, clear plastic is good
//         -----
//           |
//           |
//           + digital3
//

#define LED_N_SIDE 2
#define LED_P_SIDE 3

void setup()
{}

void loop()
{
  unsigned int j;

  // Apply reverse voltage, charge up the pin and led capacitance
  pinMode(LED_N_SIDE,OUTPUT);
  pinMode(LED_P_SIDE,OUTPUT);
  digitalWrite(LED_N_SIDE,HIGH);
  digitalWrite(LED_P_SIDE,LOW);

  // Isolate the pin 2 end of the diode
  pinMode(LED_N_SIDE,INPUT);
  digitalWrite(LED_N_SIDE,LOW);  // turn off internal pull-up resistor

  // Count how long it takes the diode to bleed back down to a logic zero
  for ( j = 0; j < 30000; j++) {
    if ( digitalRead(LED_N_SIDE)==0) break;
  }

  // Turn the gopro on if there is light
  digitalWrite(LED_P_SIDE,HIGH);

  pinMode(LED_P_SIDE,OUTPUT);

  pinMode(LED_N_SIDE,OUTPUT);
  delayMicroseconds(3000);
  digitalWrite(LED_N_SIDE,LOW);
}
