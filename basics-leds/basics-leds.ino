// If, after reading this code, you're wondering why isn't there some example to control
// the terminal's green led, it's because the wiring is not connected to the CPU.
// It's 'impossible' to do this... Unless you do some modifications to the hardware.

#define BLUE_LED LED_BUILTIN // This just maps the standard pin to the Wio-terminal's blue led.
#define DELAY 200 // This is the parameter to control the blinking speed.

void setup() {
  pinMode(BLUE_LED, OUTPUT); // Initialize the led pin as output pin.
}

void loop() {
  digitalWrite(BLUE_LED, HIGH); // Turn the led on.
  delay(DELAY); // Wait.
  digitalWrite(BLUE_LED, LOW); // Turn the led off.
  delay(DELAY); // Wait.
}
