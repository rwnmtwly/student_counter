# Student Counter Arduino Project
 This project is a group project that aims to create an Arduino-based system for counting the number of students entering a room using an ultrasonic sensor and a servo motor. The system counts the number of students and when the number reaches 6 students, the servo motor moves 90 degrees.

# Materials Needed
1. Arduino Uno  
2. Ultrasonic Sensor HC-SR04  
3. Servo Motor SG90  
4. Breadboard  
5. Jumper wires  
6. Circuit Diagram  
# Installation and Usage  
* Connect the ultrasonic sensor to the breadboard  
* Connect the VCC pin to the 5V pin on the Arduino
* Connect the GND pin to the GND pin on the Arduino
* Connect the TRIG pin to pin 9 on the Arduino
* Connect the ECHO pin to pin 10 on the Arduino
* Connect the servo motor to the breadboard
* Connect the GND pin to the GND pin on the Arduino
* Connect the VCC pin to the 5V pin on the Arduino
* Connect the signal pin to pin 6 on the Arduino
# Ciruit Diagram:  
![t725](https://github.com/rwnmtwly/student_counter/assets/120096605/10ff3d52-abb7-4ac8-b73e-6b5bc49201cd)

# Functionality  
The ultrasonic sensor detects the distance of an object and triggers the counting system. The system counts the number of students entering the room and displays the count in the Serial Monitor. When the count reaches 6 students, the servo motor moves 90 degrees to close the gate and prevent more students from entering the room. The system continues to count the number of students, but the servo motor does not move again until the count is reset.

# Contributions
* Team Member 1: [Abdulrahman Ali](https://github.com/Abdelrahman-Ali90)
* Team Member 2: [Ahmed Fayad](https://github.com/0xAMF)
* Team Member 3: [Amira Ayman]()
* Team Member 4: [Rawan Elnaggar](https://github.com/rwnmtwly)
* Team Member 5: [Shimaa Esmat](https://github.com/Shimaa-esmat)
* Team Member 6: [Tasneem Ashraf](https://github.com/tasnym1)
