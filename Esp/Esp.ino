// Ini Esp
// Nerima data dari si Teensy

#include <HardwareSerial.h>
HardwareSerial uartTeensy(2);
String response;


void setup() {
  Serial.begin(115200);
  uartTeensy.begin(115200);
}

void loop() {
  getTeensySerial();
  // delay(5000);
  // pushTeensySerial();
}

void getTeensySerial() {
  while (uartTeensy.available()) {
    char dt[512];
    uartTeensy.readBytes(dt, 512);
    Serial.println(dt, HEX);
    delay(200);
  }
}

void pushTeensySerial(){
  String datas = "\n Balasan dari ESP";
  uartTeensy.println(datas);
  delay(1000);
}
