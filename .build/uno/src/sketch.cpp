#include <Arduino.h>

void setup();
void loop();
#line 1 "src/sketch.ino"

const int LED = 13;
const int BUTTON = 7;

int val = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  Serial.println("Serial test. looop");
  val = digitalRead(BUTTON);

  if(val == HIGH){
    digitalWrite(LED, HIGH);
  }else if(val == LOW){
    digitalWrite(LED, LOW);
  }
}
