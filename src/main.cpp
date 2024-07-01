#include <Arduino.h>
#define LED 2 // 定義 GPIO 2 為 LED 控制腳位

void setup() {
  // 初始化設定
  Serial.begin(9600); // 設定串列通訊速率為 9600 bps
  pinMode(LED, OUTPUT); // 設定 GPIO 2 為輸出模式
}

void loop() {
  digitalWrite(LED, !digitalRead(LED)); // 設定 GPIO 2 輸出高電位
  // 主要程式碼
  Serial.println("Hello, ESP32!"); // 在序列埠輸出訊息
  delay(1000); // 延遲 1 秒
}
//成功!
