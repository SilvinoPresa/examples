#include <Servo.h> //include the servo library

int pos=90; //declare initial position of the servo
int servoPin1 = 9; //declare pin for servo number 1
int servoPin2 = 10; //declare pin for servo number 2
int servoPin3 = 11; //declare pin for servo number 3
int servoPin4 = 12; //declare pin for servo number 4
int servoDelay =15; //delay to allow the servo to reach position;

Servo myservo1; // create a servo object for servo number 1
Servo myservo2; // create a servo object for servo number 2
Servo myservo3; // create a servo object for servo number 3
Servo myservo4; // create a servo object for servo number 4

void setup() {
  Serial.begin(9600); //start serial port
  myservo1.attach(servoPin1); //declare where is the servo number 1
  myservo2.attach(servoPin2); //declare where is the servo number 2
  myservo3.attach(servoPin3); //declare where is the servo number 3
  myservo4.attach(servoPin4); //declare where is the servo number 3
}

void loop() {
  Serial.println("Set the angle for the servo"); //prompt the user
  while(Serial.available()==0){}; //wait until information is received from the serial port
  pos = Serial.parseInt(); //read and store the position
  myservo1.write(pos);  //write position in servo 1
  myservo2.write(pos);  //write position in servo 2
  myservo3.write(pos);  //write position in servo 3
  myservo4.write(pos);  //write position in servo 4
  delay(servoDelay);  //wait for the servo to reach position
}
