const int analX = 1;
const int analY = 2;
const int analZ = 3;

int midlow = 310;
int midhigh = 390;

int sensorAverage = 0;
int averageRun = 5;
int currentAverage = 0;

int threshold = 10;


int value =0;
int output=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
//int aX = analogRead(analX);
//int aY = analogRead(analY);
//int aZ = analogRead(analZ);

/*int X = map(aX, 0, 300, 0, 50);
int Y = map(aY, 0, 300, 0, 50);
int Z = map(aZ, 0, 300, 0, 50);
*/
 /* Serial.print("Sensor X= " );
  Serial.println(aX);
  Serial.print("Sensor Y= " );
  Serial.println(aY);
 */// Serial.print("Sensor Y= " );
  //Serial.println(aY);
//  Serial.print("Sensor Z= " );
//  Serial.println(aZ);

  for(int i=0; i<=averageRun; i++){
    int zAxis = analogRead(analZ);
    sensorAverage += zAxis;
    delay(10);
  }

  currentAverage = sensorAverage/(averageRun +1);
  sensorAverage = currentAverage;

  Serial.print("currentAverage: ");
  Serial.println(currentAverage);

  if(currentAverage > (currentAverage + threshold)){
    Serial.println("Step");
  }

  
  
  delay(100);
}

