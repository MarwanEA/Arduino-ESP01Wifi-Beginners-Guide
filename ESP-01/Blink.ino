
void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Hi from ESP");  // turn the LED on (HIGH is the voltage level)
  delay(5000);                    // wait for a second
}
