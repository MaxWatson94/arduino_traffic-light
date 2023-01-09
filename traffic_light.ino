/*
Mini project: Traffic light.

In this tutorial project, I tried to make a traffic light.
Along the way, I learned how to use variables and the "for" loop.
On the Arduino board, I connected the LEDs through 220 ohm resistors.

Athor: Max Watson
GitHub: https://github.com/MaxWatson94

*/

// TIMERS
int RED_TIMER = 10;
int YELLOW_TIMER = 5;
int GREEN_TIMER = 10;

// SETTINGS
int pin_RED = 10;
int pin_YELLOW = 9;
int pin_GREEN = 8;

void setup() {
  pinMode(pin_RED, OUTPUT);
  pinMode(pin_YELLOW, OUTPUT);
  pinMode(pin_GREEN, OUTPUT);
}

void loop() {

  for (int i = 0; i <= RED_TIMER; i++){
    digitalWrite(pin_RED, HIGH);
    delay(1000);
  }

  for (int i = 0; i <= YELLOW_TIMER; i++){
    digitalWrite(pin_YELLOW, HIGH);
    delay(1000);
  }

  for (int i = 0; i <= GREEN_TIMER - 4; i++){
    digitalWrite(pin_RED, LOW);
    digitalWrite(pin_YELLOW, LOW);
    digitalWrite(pin_GREEN, HIGH);
    delay(1000);
  }

  for (int i = 0; i <= GREEN_TIMER - 4; i++){
    if (i % 2 ) {
      digitalWrite(pin_GREEN, LOW);
    } else {
      digitalWrite(pin_GREEN, HIGH);      
    }
    delay(1000);
  }

  digitalWrite(pin_GREEN, LOW);

}





