
const int LED = 13;
const int BUTTON = 7;

int val = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  val = digitalRead(BUTTON);

  if(val == HIGH){
    Serial.println("button pushing");
    digitalWrite(LED, HIGH);
  }else if(val == LOW){
    digitalWrite(LED, LOW);
  }
}
