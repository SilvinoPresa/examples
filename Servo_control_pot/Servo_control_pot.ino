#include <Servo.h> //include the servo library

//variables for the servo motor
int pos; //declare variable for servo position
int servoPin = 9; //declare the pin where the servo is connected
int servoDelay =15; //delay to allow the servo to reach position and settle down
int potRead; //declare variable for the value read from the potentiometer
int potPin = A0; //declare the pin where the potentiometer is connected

Servo myServo; // create a servo object calle pointer

void setup() {
  myServo.attach(servoPin); //declare to which pin is the servo connected
}

void loop() {
  potRead = analogRead(potPin); //read the potentiometer
  pos = (170./1023.)*potRead+5;  // calcuate the position from the potentiometer reading
  myServo.write(pos);  //write the position on the servo
  delay(servoDelay)
}
