#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <HCSR04.h>

#define  pinBuzzer D1
#define  pinSensorGempa D2

//firebase
#define FIREBASE_HOST "gempa-9629b.firebaseio.com"
#define FIREBASE_AUTH "LKeai6l275X0YcVk5uFjnBvIZgLkrXrRJiGsgRvh"
#define WIFI_SSID "Zhrr"
#define WIFI_PASSWORD "123123123"

boolean bacaSensor;
//char ssid[] = "Andromeda"; // your network SSID (name)
//char pass[] = "gakperlutahu"; // your network password
//int status = WL_IDLE_STATUS;
//WiFiClient client;
int readValue;
String myString;
int sdata = 0;

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
  // buzzer dimatikan
//  digitalWrite(pinBuzzer, HIGH);
}
void loop() {
  // membaca data sensor
  bacaSensor = digitalRead(pinSensorGempa);
  delay(200);
  // jika terdeteksi getaran gempa
  // terbaca output sensor "1" atau logic HIGH

  if (bacaSensor == 1) {
    // buzzer menyala
    Serial.println("Ada Gempaaa!!!");
//    sdata = digitalRead(pinSensorGempa);
//    myString = String(sdata);
    Firebase.setString("Pesan","Ada Gempa!!!!!");
    digitalWrite(pinBuzzer, HIGH);
    delay(5000);
  }
  else if (bacaSensor == 0) {
    // buzzer dimatikan
    digitalWrite(pinBuzzer, LOW);
  }
}
