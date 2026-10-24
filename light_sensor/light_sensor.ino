// 光线传感器接 A0，串口每秒发送约 20 次数值(0-1023)
const int SENSOR_PIN = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(SENSOR_PIN);
  Serial.println(value);
  delay(50);
}
