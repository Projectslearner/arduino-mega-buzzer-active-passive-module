/*
    Project name : Buzzer Active Passive module
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-buzzer-active-passive-module
*/

const int buzzerPin = 2; // Digital pin connected to the active buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output
}

void loop() {
  digitalWrite(buzzerPin, HIGH); // Turn buzzer on (active high)
  delay(1000); // Wait for 1 second
  digitalWrite(buzzerPin, LOW); // Turn buzzer off
  delay(1000); // Wait for 1 second
}
