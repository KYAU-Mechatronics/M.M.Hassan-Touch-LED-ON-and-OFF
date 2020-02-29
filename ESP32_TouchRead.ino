// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4.
/* Modified: 200113  Juergen Walter 
 * New name: ESP32_TouchRead.ino   
 * Perfect example to explain "polling" 
*/
void setup()
{
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
  pinMode(2,OUTPUT);
  digitalWrite(2,LOW);
}

void loop()
{

  if (touchRead(T0) < 30)
  {
    digitalWrite(2,HIGH);
    Serial.println("LED ON");
  }
  else 
  {
    digitalWrite(2,LOW);
    Serial.println("LED OFF");
  }
  Serial.println(touchRead(T0));  // get value using T0
  delay(200);
}
