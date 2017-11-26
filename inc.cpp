#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

#define LED_PIN 13
#define WAIT_TIME 1000

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);   // set the LED on
    delay(WAIT_TIME);           // wait for a second
    digitalWrite(LED_PIN, LOW);    // set the LED off
    delay(WAIT_TIME);           // wait for a second
}
