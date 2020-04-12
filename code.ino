int Led = 13; // Use Led to indicate flame detection
int Buzzer = 9; // Use buzzer to indicate flame detection
int FlamePin = 5; // This is for input pin of the sensor
int Flame = HIGH;
void setup() {
pinMode(Led, OUTPUT);
pinMode(Buzzer, OUTPUT);
pinMode(FlamePin, INPUT);
Serial.begin(9600);
}
void loop() {
Flame = digitalRead(FlamePin);
if (Flame== HIGH)
{
Serial.println(“FLAME DETECTED”);
digitalWrite(Buzzer, HIGH);
digitalWrite(Led, HIGH);
}
else
{
Serial.println(“FLAME DETECTED”);
digitalWrite(Buzzer, LOW);
digitalWrite(Led, LOW);
}
}
