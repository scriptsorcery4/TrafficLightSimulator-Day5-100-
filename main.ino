int red_led = 7;
int yellow_led = 6;
int green_led = 5;

void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop()
{
  digitalWrite(red_led, HIGH);
  delay(2000);
  digitalWrite(yellow_led, HIGH);
  delay(500);
  digitalWrite(red_led, LOW);
  delay(500);
  digitalWrite(yellow_led, LOW);
  digitalWrite(green_led, HIGH);
  delay(2000);
	digitalWrite(yellow_led, HIGH);
  delay(500);
  digitalWrite(green_led, LOW);
  delay(200);
  digitalWrite(yellow_led, LOW);
  delay(200);
  digitalWrite(yellow_led, HIGH);
    delay(200);
  digitalWrite(yellow_led, LOW);
  delay(200);
  digitalWrite(yellow_led, HIGH);
    delay(200);
  digitalWrite(yellow_led, LOW);
  delay(200);

}