#define buzzer 13
int Do = 261;
int Re = 293;
int Mi = 329;
int Fa = 349;
int Sol = 392;
void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  Tom(Do);
  Tom(Re);
  Tom(Mi);
  Tom(Fa);
  delay(400);
  Tom(Fa);
  Tom(Fa);
  delay(400);
  Tom(Do);
  Tom(Re);
  Tom(Do);
  Tom(Re);
  delay(400);
  Tom(Re);
  Tom(Re);
  delay(400);
  Tom(Do);
  Tom(Sol);
  Tom(Fa);
  Tom(Mi);
  delay(400);
  Tom(Mi);
  Tom(Mi);
  delay(400);
  Tom(Do);
  Tom(Re);
  Tom(Mi);
  Tom(Fa);
  delay(400);
  Tom(Fa);
  Tom(Fa);
  delay(3000);
  
}

void Tom(int tom){
    tone(buzzer, tom);
    delay(400);
    noTone(buzzer);
  }
