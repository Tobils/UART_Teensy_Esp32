# UART_Teensy_Esp32
Teensy yang digunakan merupakan Teensy Versi 3.5 dan Teensy 3.6, sedangkan Esp yang digunakan adalah Esp32. Teensy berfungsi untuk mengirim data ke Esp32. 
## Teensy
1. mendefinisikan komunikasi serial `#define uartESP32 Serial2`
2. Data dikirim dari Teensy menggunakan fungsi `pushEspSerial()`
3. pada fungsi no.1, string dikirim menggunakan `uartESP32.println(datas);`
4. setelah delay, data balasan dari Esp32 diterima menggunakan fungsi `getEspSerial();`
5. Data diterima dan ditampung dalam bentuk char/sesuaikan kemudian di print di dalam `while (uartESP32.available()`

## Esp32
 1. Install package serial Teensy, kemudian import library nya `#include <HardwareSerial.h>`
 2. sama halnya yang yterjadi pada Teensy, di Esp32 terdapat dua method yaitu `getTeensySerial();` dan `pushTeensySerial()`
 3. Di method `getTeensySerial();` data dari Teensy diterima dalam bentuk byte mengunakan code `uartTeensy.readBytes(dt, 512);`
 4. Pada method `pushTeensySerial()`, data string dikirim menggunakan code `uartTeensy.println(datas); ` dimana `(datas)` meruapakan variable string.

 ## Kesimpulan
 sehingga, komunikasi Teensy dan Esp32 dapat dilakukan menggunakan UART dengan memanfaatkan pin TX,RX pada kedua board tesb. pin TX,RX yg digunakan adalah pin TX2 dan RX2. selamat mencoba.

 ### further more
 Best Regard, 
 ade.suhada@mail.ugm.ac.id 
 

