#include <SoftwareSerial.h>

const int bluetoothTx = 1;  // TX pin
const int bluetoothRx = 0;  // RX pin
const int ledPin = 13;      // LED pin

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup()
 {
  bluetooth.begin(9600);  // Set baud rate
  pinMode(ledPin, OUTPUT);
 }

void loop() {
  if (bluetooth.available())
   {
    char command = bluetooth.read();
    if (command == 'H')
     {
      digitalWrite(ledPin, HIGH);  // Turn LED ON
    } 
    else if (command == 'L') 
    {
      digitalWrite(ledPin, LOW);  // Turn LED OFF
    }
  }
}


