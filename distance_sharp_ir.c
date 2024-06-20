/*
    Project name : ESP8266 Distance Sharp IR Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-distance-sharp-ir-sensor
*/

#define IR_SENSOR_PIN A0

void setup() {
    Serial.begin(115200);
}

void loop() {
    int sensorValue = analogRead(IR_SENSOR_PIN);
    float voltage = sensorValue * (1.0 / 1023.0);  // Assuming the voltage divider scales 5V to 1V

    // Convert the voltage to distance (cm)
    float distance = 27.86 * pow(voltage, -1.15);  // Example formula, adjust based on calibration

    Serial.print("Analog Value: ");
    Serial.print(sensorValue);
    Serial.print(" | Voltage: ");
    Serial.print(voltage);
    Serial.print(" V | Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);
}
