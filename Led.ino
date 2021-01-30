char gelen_karakter;
const int mavi =3,sari=4,kirmizi=5;
void setup(){
  pinMode(mavi,OUTPUT);
  pinMode(sari,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  Serial.begin(9600);
     
}


void loop(){
while(Serial.available()>0) {
  gelen_karakter=Serial.read();
  if (gelen_karakter=='0')
  {
    digitalWrite(kirmizi,HIGH);
    Serial.println("Kırmızı LED yakıldı");
    
  }
else if (gelen_karakter=='1')
  {
    digitalWrite(kirmizi,LOW);
    Serial.println("Kırmızı LED söndürüldü");
    
  }
  else if (gelen_karakter=='2')
  {
    digitalWrite(sari,HIGH);
    Serial.println("Sari LED yakıldı");
    
    }
  else if (gelen_karakter=='3')
  {
    digitalWrite(kirmizi,LOW);
    Serial.println("Sari LED söndürüldü");
    
  }
  else if (gelen_karakter=='4')
  {
    digitalWrite(mavi,HIGH);
    Serial.println("Mavi LED yakıldı");
    
  } 
  else if (gelen_karakter=='5')
  {
    digitalWrite(kirmizi,LOW);
    Serial.println("Mavi LED söndürüldü");
} 
}
}
