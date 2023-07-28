#include <Servo.h>

const int servosignal = 6;
const int Trigger = 3;
const int Echo = 2;
const int CounterLED = 5;
const int OpenLED = 10;

double distance;
double time;
int counter = 0;

Servo myservo;

void open(void);
void StudentArrived(void);

void setup() {
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(CounterLED, OUTPUT);
  pinMode(OpenLED, OUTPUT);
  myservo.attach(servosignal);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(Trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  time = pulseIn(Echo, HIGH);
  
  distance = (time*0.034)/ 2.0;
  Serial.println(distance);
  
  delay(500);

  if (distance > 0 && distance <= 50)
  {
    StudentArrived();
  }
  if (counter == 20)
  {
   open();
  }

}

void open(void)
{
  myservo.write(90);
  Serial.println("The door opened");
  digitalWrite(OpenLED, HIGH);
  delay(500);
  digitalWrite(OpenLED, LOW);
  delay(4000);
  myservo.write(0);
  counter = 0;
}

void StudentArrived(void)
{
  counter++;
  Serial.print("Students arrived  = ");
  Serial.println(counter);
  digitalWrite(CounterLED, HIGH);
  delay(500);
  digitalWrite(CounterLED, LOW);
  delay(500);
}
