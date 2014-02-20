// GoPro Servo timelapse.
// Servo mounting: 
//               _____
//              |     |
// 180 --> ({{{{{{{O}}}}}}) <-- 0
//              |_____|
//        __
//       |  | <-- Shutter button
//      ------
//     |      |_
//     |GoPro   |
//     |       _|
//     |      |

#include <Servo.h> 
int led = 13; 
Servo myservo;  // create servo object to control a servo 
                 
 
void setup() 
{ 
  myservo.attach(9); 
pinMode(led, OUTPUT);
myservo.write(0); // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 
                            
    myservo.write(180);
    delay(5000);
    myservo.write(160);
    delay(50);
    myservo.write(160);
    delay(50);
    myservo.write(180);
 
 
}
