#define echo 6
#define trig 7
#define led 8

int maximum=50;
int minimum=0;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  int olcum=mesafe(maximum, minimum);
  if(mesafe<5)
  {  digitalWrite(led,HIGH); }
  else{
    digitalWrite(led,LOW);
  }

}
int mesafe(int maxrange,int minrange)
{
  long duration,distance;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration/58,2;
  delay(50);
  if(distance>=maxrange || distance<=minrange)
  return 0;
  return distance; 
}
