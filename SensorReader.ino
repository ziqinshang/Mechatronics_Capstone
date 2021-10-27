int sensor1Value = 0;
int sensor2Value = 0;
int sensor3Value = 0;
int sensor4Value = 0;
int sensor5Value = 0;
int sensor6Value = 0;
int sensor7Value = 0;
int sensor8Value = 0;
void setup() 
{
  Serial.begin(9600);
for (int i = 2; i <= 9; i++) pinMode(i, INPUT_PULLUP); // set pin 2-9 to input with pull up
}

void loop() {
 sensor1Value = digitalRead(2);
 sensor2Value = digitalRead(3);
 sensor3Value = digitalRead(4);
 sensor4Value = digitalRead(5);
 sensor5Value = digitalRead(6);
 sensor6Value = digitalRead(7);
 sensor7Value = digitalRead(8);
 sensor8Value = digitalRead(9);
  Serial.print(sensor1Value);
  Serial.print(sensor2Value);
  Serial.print(sensor3Value);
  Serial.print(sensor4Value);
  Serial.print(sensor5Value);
  Serial.print(sensor6Value);
  Serial.print(sensor7Value);
  Serial.print(sensor8Value);
  Serial.print("\n");
  delay(100);
}
