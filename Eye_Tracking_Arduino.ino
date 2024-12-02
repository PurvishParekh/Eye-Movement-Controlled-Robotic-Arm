#include <Servo.h>

// Create a servo object
Servo myServo1;
Servo myServo2;

// Define positions for each command
int centerPosition = 90; // Center position
int leftPosition = 0;   // Left position
int rightPosition = 180; // Right position
int upPosition = 0;     // Up position
int downPosition = 180;  // Down position

void setup() {
  // Attach the servo to pin 9
  myServo1.attach(9);
  myServo2.attach(10);
  
  // Set the servo to the center position
  myServo1.write(centerPosition);

  // Start serial communication
  Serial.begin(9600);
}

void move(int command){
  if (command == 0){
    i = 0
    while(i<=180){
      
    }
  }
}
void loop() {
  // Check if data is available on the serial port
  if (Serial.available() > 0) {
    // Read the incoming command
    String command = Serial.readStringUntil('\n');
    command.trim(); // Remove any whitespace or newline characters

    // Act based on the received command
    if (command == "Center") {
      myServo1.write(centerPosition);
      Serial.println("Servo moved to center");
    } else if (command == "Left") {
      myServo1.write(leftPosition);
      Serial.println("Servo moved to left");
    } else if (command == "Right") {
      myServo1.write(rightPosition);
      Serial.println("Servo moved to right");
    } else if (command == "Up") {
      myServo2.write(upPosition);
      Serial.println("Servo moved up");
    } else if (command == "Down") {
      myServo2.write(downPosition);
      Serial.println("Servo moved down");
    } else if (command == "Blinking") {
      // Optional: Add behavior for "Blinking" if needed
      Serial.println("Blinking command received (no action)");
    } else {
      Serial.println("Unknown command: " + command);
    }
  }
}