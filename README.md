# Arduino-gempa-mcu
Arduino pendeteksi gempa + firebase.
Modul Yang Dipakai
- Node MCU
- Buzzer
- Vibration Sensor

# Library
Download Library : https://drive.google.com/open?id=1i-WgjCNOIZtDye-dRQoMlYXU7H4_DFmD

```
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <HCSR04.h>
```

# FIREBASE CONFIGURATION

Ubah Setingan Wifi Dan Firebase Sebelum Menggunakan.
```
#define FIREBASE_HOST "gempa-9629b.firebaseio.com" 
#define FIREBASE_AUTH "LKeai6l275X0YcVk5uFjnBvIZgLkrXrRJiGsgRvh"
#define WIFI_SSID "Wifi_asus"
#define WIFI_PASSWORD "123123123"
```

Aplikasi Pendeteksi Gempa : https://github.com/fiqryq/PendeteksiGempa

Jangan Lupa Starnya.
