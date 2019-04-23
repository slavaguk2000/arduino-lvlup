#define DEL_TIME 1000
#define BRIGHTNESS 50
#define YPin A2
#define yPin A3
#define k 0.2

long long times = 0;
bool up = true;
unsigned long long click = 0;
double Y, y;
int cellY, cellY;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(13, OUTPUT);
  pinMode(YPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(0, INPUT);
  Serial.begin(9600);
  Y = y = 0;
  cellY = cellY = 0;
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(digitalRead(0));
  if (digitalRead(0) == HIGH) digitalWrite(13, HIGH);
   else  digitalWrite(13, LOW);
   delay(1000);
  
}

void getPrint(double& x, double& y, int& cellX, int& cellY){
  x += analogRead(xPin)*k;
  if(x < 0){
    if(cellX != 0)
      cellX--;
    else cellX = 15;
  }
  if(x > 4){
    if(cellX != 15)
      cellX++;
    else cellX = 0;
  }
  y += analogRead(yPin)*k;
    if(y < 0 || y > 7)
      if(cellY == 0) cellY = 1;
      else cellY = 0;
}
