## ESP8266 WiFi Control with HTML Interface

This project is a simple example for controlling an LED connected to an ESP8266 module over WiFi using a web interface. This includes an Arduino sketch, instructions for setting up the hardware and control the LED using the webserver.

### Hardware Required:
- NodeMCU (ESP8266 Wi-fi)
- LED
- Jumper wires
- USB cable
  
### Software Required:
- Arduino IDE
- ESP8266WiFi library (can be installed via Arduino Library Manager)

### Setup Instructions:

1. **Connect the Hardware:**
   - Connect the LED to pin D7 and ground (GND) pin on the ESP8266 module.

2. **Install Required Libraries:**
   - Open Arduino IDE.
   - Go to `Sketch` -> `Include Library` -> `Manage Libraries...`.
   - Search for "ESP8266WiFi" and install it.

3. **Open the Sketch:**
   - Open the provided Arduino sketch (`ESP8266_WiFi_Control.ino`) in the Arduino IDE.

4. **Configure WiFi Credentials:**
   - Replace `ssid` and `password` variables with your WiFi credentials.

5. **Upload the Sketch:**
   - Connect your ESP8266 module to computer via USB.
   - Select the appropriate board and port from the Arduino IDE's `Tools` menu.
   - Click the upload button to upload the sketch to the ESP8266 module.

6. **Access the Web Interface:**
   - Once the sketch is uploaded, open the serial monitor in the Arduino IDE.
   - Note down the IP address printed in the serial monitor after the ESP8266 connects to the WiFi network.
   - Open a web browser on any device connected to the same WiFi network.
   - Enter the IP address and press Enter.

7. **Control the LED:**
   - Now a web page displays with buttons to turn the LED on and off.
   - Clicking these buttons will send requests to the ESP8266, and it will respond by turning the LED on or off accordingly.

### Usage and Applications:
- This project is a basic example of controlling hardware over WiFi using an ESP8266 module.
- It can be used for more complex IoT projects where devices are controlled remotely over the internet.
- Applications include home automation, smart lighting systems, remote monitoring.

### Note:
- Make sure your ESP8266 module is connected to a stable and same WiFi network on your device and as well the ESP8266.
- Handle components with care to avoid damage.
