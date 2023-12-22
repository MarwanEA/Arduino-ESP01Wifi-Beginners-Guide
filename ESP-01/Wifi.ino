/*
* This sketch sends data via HTTP GET requests to data.sparkfun.com service.
*
* You need to get streamId and privateKey at data.sparkfun.com and paste them
* below. Or just customize this script to talk to other HTTP servers.
* ESP8266 Arduino example
*/
#include <ESP8266WiFi.h>
const char* ssid = "Mar1_Wifi";
const char* password = "12345678";


void setup() {
  Serial.begin(115200);
  delay(10);
  // We start by connecting to a WiFi network

  // Use WiFiClient class to create TCP connections
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

String incomingvalue = "";
void loop() {


  /* READ SENSOR VALUES */
  incomingvalue = Serial.readString();
  if(!incomingvalue.isEmpty()){
    /* SEND DATA */

  }




}