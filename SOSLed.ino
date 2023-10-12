/*
  SOSLed

  Use LED to sinalize SOS with morse code.

  Created by Sanarielsen at 12 Sep 2023
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  //SOS request is resumed to three short light signal
  generateFlashLight(3);
  //... after three long light signal
  generateLongLight(3);
  //... and finally three short light signal again
  generateFlashLight(3);
  //Time for reset the signal
  delay(5000);
}

void generateFlashLight(int times) {

  for (int i=0;i<times; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  }
}

void generateLongLight(int times) {

  for (int i=0;i<times; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(4000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  }
}
