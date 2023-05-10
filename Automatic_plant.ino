#define soil_moisture 12
#define pump 11

void setup() {
 
  pinMode(pump, OUTPUT);
  pinMode(soil_moisture, INPUT);
  Serial.begin(9600);
}

void loop() {
 
  int val = digitalRead(soil_moisture);
  Serial.println(val);
  if(val == 1)
  {
    digitalWrite(pump, HIGH);
  }
  else
  {
    digitalWrite(pump, LOW);
  }
}
