// GoPro Servo turn ON

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
  digitalWrite(led, HIGH);                           
    myservo.write(0);
    delay(10);
    myservo.write(18);
    delay(50);
    myservo.write(0);
  digitalWrite(led, LOW);
  delay(X); // replace X by the lapse of the timelapse.
}
