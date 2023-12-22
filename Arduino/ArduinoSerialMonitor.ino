#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // RX, TX
 
void setup()
{
 Serial.begin(115200);
 mySerial.begin(115200);
 }
void loop(){
  
 String IncomingString="";
 boolean StringReady = false;
 
 while (mySerial.available()){
   IncomingString=mySerial.readString();
   StringReady= true;
  }
 
  if (StringReady){
    Serial.println("Received String: \n" + IncomingString);
  
  }
 }
 
