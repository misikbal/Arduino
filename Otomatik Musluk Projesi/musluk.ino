int trigPin = 7; /* Sensorun trig pini Arduinonun 6 numaralı ayağına bağlandı */
int echoPin = 6;
int in1=10;
int in2=12;/* Sensorun echo pini Arduinonun 7 numaralı ayağına bağlandı */
int in3 = 8;
int in4 = 9;
int enA=11;
int enB=3;
long sure;
long uzaklik;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(trigPin, OUTPUT); /* trig pini çıkış olarak ayarlandı */
  pinMode(echoPin,INPUT); /* echo pini giriş olarak ayarlandı */
  Serial.begin(9600); /* Seri haberlesme baslatildi */
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  
}

void loop() {

  

  digitalWrite(trigPin, LOW); /* sensör pasif hale getirildi */
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); /* Sensore ses dalgasının üretmesi için emir verildi */
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  /* Yeni dalgaların üretilmemesi için trig pini LOW konumuna getirildi */ 
  sure = pulseIn(echoPin, HIGH); /* ses dalgasının geri dönmesi için geçen sure ölçülüyor */
  uzaklik= sure /29.1/2; /* ölçülen sure uzaklığa çevriliyor */            
  if(uzaklik > 200)
    uzaklik = 200;
  Serial.print("Uzaklik ");  
  Serial.print(uzaklik); /* hesaplanan uzaklık bilgisayara aktarılıyor */
  Serial.println(" CM olarak olculmustur.");  
  delay(500);
  
  if(uzaklik<=20 && uzaklik>=19)
  { 
    while(true)
    {
      analogWrite(enA,180);
      analogWrite(enB,130);
      break;
    }
    while(true)
    {
      analogWrite(enA,100);
      analogWrite(enB,100);
      delay(5000);
      break;
   }
    
  }
  else if(uzaklik<=18 && uzaklik>=17)
  {
    while(true)
    {
      analogWrite(enA,180);
      analogWrite(enB,150);
      break;
    }
    while(true)
    {
      analogWrite(enA,100);
      analogWrite(enB,100);
      delay(5000);
      break;
    }
    
    
  }
  else if(uzaklik<=16 && uzaklik>=15)
  {
    while(true)
    {
      analogWrite(enA,180);
      analogWrite(enB,170);
      break;
    }  
    while(true)
    {
      analogWrite(enA,100);
      analogWrite(enB,100);
      delay(5000);
      break;
   }
  }
  else if(uzaklik<=14 && uzaklik>=13)
  {
    while(true)
    {
      analogWrite(enA,190);
      analogWrite(enB,190);
      break;
    }  
    while(true)
    {
      analogWrite(enA,100);
      analogWrite(enB,100);
      delay(5000);
      break;
   }
  }
  else if(uzaklik<=12 && uzaklik>=11)
  {
    while(true)
    {
      analogWrite(enA,210);
      analogWrite(enB,210);
      break;
    }  
    while(true)
    {
      analogWrite(enA,100);
      analogWrite(enB,100);
      delay(5000);
      break;
   }
  }
  else if(uzaklik<=10 && uzaklik>=9)
  {
    while(true)
    {
      analogWrite(enA,230);
      analogWrite(enB,230);
      break;
    }
    while(true)
    {
      analogWrite(enA,100);
      analogWrite(enB,100);
      delay(5000);
      break;
   }
  }
  else if(uzaklik<=8)
  {
    while(true)
    {
      analogWrite(enA,255);
      analogWrite(enB,255);
      break;
    }  
    while(true)
    {
      analogWrite(enA,100);
      analogWrite(enB,100);
      delay(5000);
      break;
   }
  }
  
  else
  {
    analogWrite(enB,0);
    analogWrite(enA,0);
  }
  



}
