const int SENSOR_PORT = A0;  // CdSセンサー入力ポート
const int LOOP_DELAY = 1000; // ループ周期(ms)

int sensorPort = 0;



void setup() {
  
  Serial.begin(9600);
  
}

void loop(){

  int sensor_value = analogRead(SENSOR_PORT);

  int temp = map(sensor_value, 0, 205, 0, 100);          // 整数で表示
  float temp_f = (float(5 * sensor_value) / 1024) * 100; // 小数点以下も表示

  Serial.println("");
  Serial.println(temp);
  Serial.println("");
  Serial.println(temp_f);

  delay(LOOP_DELAY);
  
}

