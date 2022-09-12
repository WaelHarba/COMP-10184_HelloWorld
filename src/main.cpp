#include <Arduino.h>

/*
    I, Wael Harba, student number 000787960, certify that what I am submitting is my own work; 
    that I have not copied it from any other source. I also certify that I have not allowed my work to be copied by others.
*/

void setup() {
  // put your setup code here, to run once:

  // Start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nStudent Name: Wael Harba\n"
  "Student Number: 000787960"
  "\nD1 mini Details:\n\tESP8266 Chip ID: " + String(ESP.getChipId()) +
  "\n\tFlash Chip ID: " + String(ESP.getFlashChipId()));
  
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(2000);
  String milli_seconds = String(millis());
  Serial.println("Number of milliseconds since the D1 Mini was started: " + milli_seconds + " ms");

}