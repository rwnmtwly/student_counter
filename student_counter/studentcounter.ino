#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position
int student_count = 0;  // variable to store the number of students

const int trigPin = 9;  // define the pins for the ultrasonic sensor
const int echoPin = 10;

void setup() {
  Serial.begin(9600);   // initialize serial communication
  myservo.attach(8);    // attaches the servo on pin 8 to the servo object
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distance;

  digitalWrite(trigPin, LOW);  // set the trigger pin to low
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // set the trigger pin to high for 10 microseconds
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);  // measure the duration of the echo pulse
  distance = duration * 0.034 / 2;   // convert the duration to distance in cm

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 30) {   // if the distance is less than 30cm, increment the counter
    student_count++;     // increment the student counter
    Serial.print("Student count: ");
    Serial.println(student_count);
    delay(500);          // wait for half a second to avoid multiple counts
  }

  if (student_count == 15) {   // if the student count reaches 15, move the servo by 90 degrees
    pos = 90;
    myservo.write(pos);
    Serial.println("Servo moved 90 degrees!");
    delay(1000);  // wait for a second before resetting the servo position
    pos = 0;
    myservo.write(pos);
    student_count = 0;  // reset the student count
    Serial.println("Student count reset!");
    delay(1000);  // wait for a second before restarting the counting process
  }
}