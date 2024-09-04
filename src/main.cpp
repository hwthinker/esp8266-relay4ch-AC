#include <Arduino.h>

#define LED_ESP 2
#define RLY1 14
#define RLY2 16
#define RLY3 13
#define RLY4 12

const int relayPins[] = {RLY1, RLY2, RLY3, RLY4};
const int numRelays = sizeof(relayPins) / sizeof(relayPins[0]);
const int delayTime = 1000;  // Waktu delay dalam milidetik

void setup() {
  pinMode(LED_ESP, OUTPUT);
  for (int i = 0; i < numRelays; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW);  // Matikan semua relay pada awal
  }
  digitalWrite(LED_ESP, LOW);  // Matikan LED pada awal
}

void loop() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(LED_ESP, HIGH);  // Nyalakan LED saat relay aktif
    digitalWrite(relayPins[i], HIGH);  // Nyalakan relay
    delay(delayTime);

    digitalWrite(relayPins[i], LOW);  // Matikan relay
    digitalWrite(LED_ESP, LOW);  // Matikan LED saat relay mati
    delay(delayTime);
  }
}
