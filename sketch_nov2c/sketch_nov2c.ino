#define led_pin A2

int count=0;
// int arr = [];

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, INPUT);
}

void loop() {
  int val = analogRead(led_pin);
  val = map(val, 0, 1023, 0, 100);
  delay(100);
  Serial.print(val);
  // while(true){
  //   if(val / 10 == 0){
  //     break;
  //   }
  //   val = val / 10;
  //   count++;
  // }
  //delay(1000);
  // Serial.print(count);
  //Serial.println(val);
  // while (Serial.available()){
  //   s = Serial.read();
  // }
  
  // if( s == '1'){
  //   digitalWrite(led_pin, HIGH);
  // }
  
  // else if(s == '0'){
  //   digitalWrite(led_pin, LOW);
  // }
}
