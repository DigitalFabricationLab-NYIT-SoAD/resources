/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos = 0;    // variable to store the servo position
int end1 = 80;
int end2 = 120;
int zip = 12;
int trial = 170;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(6);  // attaches the servo on pin 6 to the servo object
  myservo3.attach(5);
  myservo4.attach(3);
  Serial.begin(9600);
}

void loop() {

  for (pos = end1; pos <= end2; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos); 
    delay(30); 
    myservo2.write(pos);
    delay(30); 
    myservo3.write(pos);
    delay(30); 
    myservo4.write(pos);
    delay(30); 
    Serial.println(pos);  //print it out
    delay(30);                       // waits 15ms for the servo to reach the position
  }
  for (pos = end2; pos >= end1; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);  
    delay(30);  
    myservo2.write(pos);
    delay(30); 
    myservo3.write(pos);
    delay(30); 
    myservo4.write(pos);// tell servo to go to position in variable 'pos'
    Serial.println(pos); //print it out !
    delay(30);                       // waits 15ms for the servo to reach the position
  }
}
