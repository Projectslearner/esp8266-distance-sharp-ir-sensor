# ESP8266 Distance Measurement with Sharp IR Sensor Project

#### Project Overview
This project demonstrates how to interface a Sharp IR distance sensor with an ESP8266 microcontroller. The sensor reads distance values and displays the results on the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **Sharp IR Distance Sensor**
- **Jumper Wires**
- **Breadboard (optional)**

#### Block Diagram
![ESP8266 Distance Sensor Block Diagram](block_diagram.png)

#### Circuit Setup
1. **Connecting the Sharp IR Sensor to ESP8266:**
   - **VCC:** Connect to the 3.3V pin on the ESP8266.
   - **GND:** Connect to the GND pin on the ESP8266.
   - **Output:** Connect to the A0 pin on the ESP8266.

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Install the necessary libraries (`Wire` and `Adafruit_TCS34725`).
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - After uploading the code, open the Serial Monitor.
   - You should see the distance sensor readings (analog value, voltage, and calculated distance) printed to the Serial Monitor every half second.

#### Applications
- **Proximity Detection:** Use the IR sensor for applications requiring distance measurement, such as obstacle detection in robots.
- **Automatic Doors:** Measure distance to trigger automatic door mechanisms.
- **Level Measurement:** Monitor levels of liquids or solids in containers.

#### Notes
- **Calibration:** Adjust the voltage-to-distance conversion formula based on calibration for accurate distance readings.
- **Power Supply:** Ensure a stable power supply to the ESP8266 and Sharp IR sensor.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Distance Sensor](https://projectslearner.com/learn/esp8266-distance-sharp-ir-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner