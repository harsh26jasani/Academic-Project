const int trigPin = 9; 
const int echoPin = 10;
const int trig = 11;
const int echo = 12;

int red=4;
int green=5;
int red2=6;
int green2=7;
int r=2;
int g=3;


long duration;
int distance;
long duration2;
int distance2;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(trig,OUTPUT);
pinMode(echo, INPUT);
pinMode(green, OUTPUT);
pinMode(red, OUTPUT);
pinMode(green2, OUTPUT);
pinMode(red2, OUTPUT);


Serial.begin(9600); 
}
void loop() {
// First HC SR-04
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;


//second HC SR-04
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);

duration2 = pulseIn(echo, HIGH);
distance2= duration2*0.034/2;


Serial.print("Distance: ");
Serial.println(distance);
Serial.print("Distance2: ");
Serial.println(distance2);
delay(500);



if (distance2 <30)
{
  digitalWrite(red, HIGH);
  digitalWrite(green,LOW);
  delay(5000);
 
  
  }
else
{

  digitalWrite(red, LOW);
  digitalWrite(green,HIGH);


 
  }



if (distance <30)
{
  digitalWrite(red2, HIGH);
  digitalWrite(green2,LOW);
  delay(5000);

  
  }
else
{

  digitalWrite(red2, LOW);
  digitalWrite(green2,HIGH);


 
  }
  

  


}
