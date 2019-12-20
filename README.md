# Arduino-gempa-mcu
Arduino pendeteksi gempa + firebase
 
Download Library : https://drive.google.com/open?id=1i-WgjCNOIZtDye-dRQoMlYXU7H4_DFmD

# FIREBASE CONFIGURATION

```
#define FIREBASE_HOST "gempa-9629b.firebaseio.com" 
#define FIREBASE_AUTH "LKeai6l275X0YcVk5uFjnBvIZgLkrXrRJiGsgRvh"
#define WIFI_SSID "Wifi_asus"
#define WIFI_PASSWORD "123123123"

void setup() {
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("conecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".......");
    delay(500);
  }
  Serial.println();
  Serial.print("konek");
  Serial.println(WiFi.localIP());
  Firebase.begin(FIREBASE_HOST,FIREBASE_AUTH);
  pinMode(pinSensorGempa, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);
}

```
