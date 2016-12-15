int speaker= 9;  // membuat variabel Speaker untuk pin 9 Arduino
void setup() {

}
  void SOL1(){tone(speaker, 330);}
  void LA1(){tone(speaker, 385);}
  void SI1(){tone(speaker, 420);}
  void NOL(){noTone(speaker);}
  void DO(){tone(speaker, 440);}
  void RE(){tone(speaker, 493);}
  void MI(){tone(speaker, 554);}
  void FA(){tone(speaker, 587);}
  void SOL(){tone(speaker, 659);}
  void LA(){tone(speaker, 740);}
  void SI(){tone(speaker, 830);}
  void DOO(){tone(speaker, 880);}
  
void loop() {
  DO(); delay(2000);
  RE(); delay(1000);
  NOL(); delay(100);
  SOL1(); delay(600);
  SOL(); delay(1000);
  FA(); delay(500);
  MI(); delay(500);
  RE(); delay(1000);
  NOL(); delay(75);
  MI(); delay(500);
  FA(); delay(500);
  MI(); delay(1000);
  RE(); delay(500);
  DO(); delay(500);
  SI1(); delay(400);
  DO(); delay(800);
  NOL(); delay(50);
  DO(); delay(800);
  SOL1(); delay(2000);
  SI1(); delay(1000);
  NOL(); delay(100);
  DO(); delay(2000);
  RE(); delay(1000);
  NOL(); delay(100);
  SOL1(); delay(600);
  SOL(); delay(1000);
  FA(); delay(500);
  MI(); delay(500);
  RE(); delay(1000);
  NOL(); delay(75);
  MI(); delay(500);
  FA(); delay(500);
  MI(); delay(1000);
  RE(); delay(500);
  DO(); delay(500);
  SI1(); delay(400);
  DO(); delay(800);
  NOL(); delay(50);
  DO(); delay(500);
  SI1(); delay(400);
  DO(); delay(800);
  RE(); delay(500);
  MI(); delay(800);
  RE(); delay(800);
  DO(); delay(2000);
  NOL(); delay(1000);
}
