# Getting Started with Arduino and ESP8266
This repository provides an introduction to working with an Arduino and ESP8266 WiFi module. It contains Arduino code examples for:

1. Setting up communication between an Arduino and ESP8266
2. Testing the connection  
3. Connecting the ESP8266 to WiFi  

## Hardware  
The following hardware is used:  

- Arduino Uno
- ESP8266-01 WiFi module   

### Configuration  
Connect the pins between the Arduino and ESP8266 as follows for initial configuration:  

| ESP8266 Pin | Arduino Pin |
|-|-|   
| TX | D1 |  
| RX | D0 |    

### Communication  
Once configured, connect for communication as follows:  

| ESP8266 Pin | Arduino Pin |  
|-|-|
| TX | D2 | 
| RX | D3 |  

## Code Files   
The code examples are contained in the following files:  

**ArduinoSerialMonitor.ino**  

Arduino code to enable communication between the Arduino and ESP8266. Sends data via serial to the ESP8266.     

**Blink.ino**

Test code uploaded to the ESP8266 after it is wired to the Arduino. Blinks an LED and prints a statement over serial to confirm communication.  

**WiFi.ino**  

Code to connect the ESP8266 to WiFi, upload to the ESP8266 once communication is confirmed. Prints connection status over serial.  

## Usage Guide  
To use the examples, follow these steps:     

1. Upload ArduinoSerialMonitor.ino to the Arduino  
2. Connect ESP8266 as shown in the Configuration table   
3. Upload Blink.ino to the ESP8266
4. Confirm serial communication works on both devices  
5. Disconnect ESP8266 reset pin from Arduino GND   
6. Move ESP8266 TX/RX connections to Arduino D2/D3  
7. Upload WiFi.ino to ESP8266 
8. Check for WiFi connection and ESP8266 connectivity
