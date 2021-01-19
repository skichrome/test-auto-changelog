void setup()
{
  // Setup led and power it off
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop()
{
  // Power led on
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  // Power led off
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
}
