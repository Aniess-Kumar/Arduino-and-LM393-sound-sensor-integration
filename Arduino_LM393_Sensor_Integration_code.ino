// Arduino + LM393 Sensor Integration
// Reads the digital output (DO) from an LM393-based sensor
// and displays the sensor state on the Serial Monitor.
//
// Wiring:
// LM393 VCC -> Arduino 5V
// LM393 GND -> Arduino GND
// LM393 DO  -> Arduino D2
//
// Note: The LM393 module can be active LOW or active HIGH depending
// on the sensor/module. Change SENSOR_ACTIVE_STATE if required.

const int SENSOR_PIN = 2;
const int SENSOR_ACTIVE_STATE = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);

  Serial.println("LM393 Sensor + Arduino");
  Serial.println("---------------------");
}

void loop() {
  int sensorState = digitalRead(SENSOR_PIN);

  if (sensorState == SENSOR_ACTIVE_STATE) {
    Serial.println("Sensor: ACTIVE");
  } else {
    Serial.println("Sensor: INACTIVE");
  }

  delay(200);
}
