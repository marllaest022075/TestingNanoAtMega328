#include <Arduino.h>

const int pin = 13;
const long interval = 500;

// put function declarations here:
void TurnOnOffPin();

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  TurnOnOffPin();
}

// put function definitions here:
void TurnOnOffPin()
{
  static long previousMillis = 0;
  long currentMillis = millis();
  if (currentMillis - previousMillis > interval)
  {
    digitalWrite(pin, !digitalRead(pin) );
    previousMillis = currentMillis;
  }
}