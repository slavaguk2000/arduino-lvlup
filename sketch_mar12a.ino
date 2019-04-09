#define DEL_TIME 1000
#define BRIGHTNESS 50
long long times = 0;
bool up = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(0, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(digitalRead(0));
  if (digitalRead(0) == HIGH) digitalWrite(13, HIGH);
   else  digitalWrite(13, LOW);;
   delay(1000);
   }
