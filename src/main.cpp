#include <Arduino.h>
const long INTERVAL = 1000;
// put function declarations here:
void Countcicles();

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Countcicles();
}

// put function definitions here:
void Countcicles()
{
  static unsigned long lastTime = 0;
  static unsigned long count = 0;
  unsigned long currentTime = millis();
  unsigned long intervalo = currentTime - lastTime;
  if (intervalo >= INTERVAL)
  {
    Serial.print("Count : ");
    Serial.print(count);
    Serial.print("  Interval : ");
    Serial.println(intervalo);
    count = 0;
    lastTime = currentTime;
  }
  count++;
}