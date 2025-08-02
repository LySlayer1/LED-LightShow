int led1 = 13;
int led2 = 8;
int led3 = 7;
int led4 = 2;
int led5 = 10;

// Array to simplify handling LEDs for the wave effect
int leds[] = {led1, led2, led3, led4, led5};

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  randomSeed(analogRead(0)); // Initialize random seed for random blinking
}

void loop() {
  // 1. Fast blinking pattern
  for (int i = 0; i < 10; i++) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    delay(100);

    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    delay(100);
  }

  // 2. Sequential turn on
  digitalWrite(led1, HIGH); delay(200);
  digitalWrite(led2, HIGH); delay(200);
  digitalWrite(led3, HIGH); delay(200);
  digitalWrite(led4, HIGH); delay(200);
  digitalWrite(led5, HIGH); delay(200);

  digitalWrite(led1, LOW); delay(200);
  digitalWrite(led2, LOW); delay(200);
  digitalWrite(led3, LOW); delay(200);
  digitalWrite(led4, LOW); delay(200);
  digitalWrite(led5, LOW); delay(200);

  // 3. Random blinking
  for (int i = 0; i < 10; i++) {
    int led = random(2, 14); // Random number between 2 and 13

    // Turn off all LEDs
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    // Turn on a random LED if it matches one of the pins
    if (led == led1 || led == led2 || led == led3 || led == led4 || led == led5) {
      digitalWrite(led, HIGH);
    }

    delay(150);
  }

  // 4. All LEDs ON then OFF
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(500);

  // 5. Ping-Pong wave effect
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW);
  }

  for (int i = 3; i > 0; i--) { // Reverse direction without repeating the ends
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW);
  }
}
