// ini Teensy
// Transmitter data

#define uartESP32 Serial2
String response;

void setup() {
  uartESP32.begin(9600);
}

void loop() {
pushEspSerial();
delay(5000);
getEspSerial();
}

void getEspSerial(){
  while (uartESP32.available()){
    response += char(uartESP32.read());
    Serial.print(response);
    delay(200);
  }
}

void pushEspSerial(){
  String datas = "ini dari Teensy ";
  uartESP32.println(datas);
  delay(1000);
}
