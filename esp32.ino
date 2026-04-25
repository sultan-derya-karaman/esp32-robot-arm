#include "BluetoothSerial.h"
#include <ESP32Servo.h>

BluetoothSerial SerialBT; 

Servo s1, s2, s3, s4;
int a1=90, a2=90, a3=90, a4=90;

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  // Servo pinleri
  s1.attach(18); 
  s2.attach(19);
  s3.attach(21);
  s4.attach(22);

  // Bluetooth başlatma
  if (!SerialBT.begin("V-Bot-Test")) {
    Serial.println("Bluetooth hatasi!");
  } else {
    Serial.println(">>> ESP32 ACILDI <<<");
    Serial.println("Bluetooth hazir. Cihaz adi: V-Bot-Test");
  }
}

void loop() {
  if (SerialBT.available()) {
    String veri = SerialBT.readStringUntil('\n');
    veri.trim();

    if (veri.startsWith("s1:")) a1 = veri.substring(3).toInt();
    else if (veri.startsWith("S2:")) a2 = veri.substring(3).toInt();
    else if (veri.startsWith("S3:")) a3 = veri.substring(3).toInt();
    else if (veri.startsWith("S4:")) a4 = veri.substring(3).toInt();

    a1 = constrain(a1, 0, 180);
    a2 = constrain(a2, 0, 180);
    a3 = constrain(a3, 0, 180);
    a4 = constrain(a4, 0, 180);

    s1.write(a1);
    s2.write(a2);
    s3.write(a3);
    s4.write(a4);

    Serial.print("Gelen veri: ");
    Serial.println(veri);
  }
}