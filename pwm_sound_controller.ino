int pinPot = A0;
int pinBuzzer = 9;

int valorPot = 0;
int salidaPWM = 0;

void setup() {
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  valorPot = analogRead(pinPot);              // 0 - 1023
  salidaPWM = map(valorPot, 0, 1023, 0, 255); // 0 - 255

  analogWrite(pinBuzzer, salidaPWM);          // señal PWM

  delay(10);
}
