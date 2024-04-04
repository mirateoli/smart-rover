/*
Control Nano 33 BLE Sense Rev2 LEDs from Python

Author: Mira Teoli
Date: April 3, 2024

*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Check if there is data at the serial port waiting for us
  if (Serial.available() > 0)
  {
    String msg = Serial.readString();
    if (msg == "go")
    {
      digitalWrite(LEDG, HIGH);
      digitalWrite(LEDR, LOW);


    }
    else if (msg == "stop")
    {
      digitalWrite(LEDR, HIGH);
      digitalWrite(LEDG, LOW);
    }
    else
    {
      for (int i = 0; i < 5; i++)
      {
        digitalWrite(LEDB, HIGH);
        delay(100);
        digitalWrite(LEDB, LOW);
        delay(100);
      }
    }
  }

}
