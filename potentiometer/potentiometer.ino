// 旋钮电位器中间引脚接 A3，两端分别接 5V 和 GND
// 串口约每 30ms 发送一次数值(0-1023)
const int POT_PIN = A3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(POT_PIN);
  Serial.println(value);
  delay(30);
}
