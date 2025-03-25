const int buzzer=8;// buzzer ın + bacağının bağlı olduğu arduino pini

void setup() 
{
  pinMode(buzzer,OUTPUT); //buzzer ın bağlı olduğu pini çıkış olarak ayarladık
}

void loop() 
{
  digitalWrite(buzzer,HIGH); //buzzer a güç göndererek ses çıkarmasını sağladık
  delay(500); // 1 saniye boyunca çalmasını söyledik
  digitalWrite(buzzer,LOW);  //buzzerın gücünü keserek susmasını sağladık
  delay(400);    // 1 saniye boyunca susmasını söyledik
}
