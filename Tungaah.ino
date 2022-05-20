int Digital1 = 20;
int Digital2 = 21;
int Digital3 = 22;
int Digital4 = 24;
int Digital5 = 26;
int Digital6 = 28;
int Digital7 = 30;
int Digital8 = 32;
int Digital9 = 34;
int Digital10 = 36;
int Digital11 = 38;
int Digital12 = 40;
int Digital13 = 42;
int Digital14 = 44;
int Digital15 = 46;
int Digital16 = 48;
int Digital17 = 50;
int Digital18 = 52;
int Digital19 = 23;
int Digital20 = 25;
int Digital21 = 27;
int Digital22 = 29;
int Digital23 = 31;
int Digital24 = 33;
int Digital25 = 35;
int Digital26 = 37;
int Digital27 = 39;
int Digital28 = 41;
int Digital29 = 43;
int Digital30 = 45;

int old_1=11,old_2=11,old_3=11,old_4=11,old_5=11,old_6=11,old_7=11,old_8=11,old_9=11,old_10=11,old_11=11,old_12=11,old_13=11,
old_14=11,old_15=11,old_16=11,old_17=11,old_18=11,old_19=11,old_20=11,old_21=11,old_22=11,old_23=11,old_24=11,old_25=11,old_26=11,old_27=11,old_28=11,old_29=11,old_30=11;

void setup() {
  
  Serial.begin(115200);
  pinMode(Digital1, INPUT_PULLUP);
  pinMode(Digital2, INPUT_PULLUP);
  pinMode(Digital3, INPUT_PULLUP);
  pinMode(Digital4, INPUT_PULLUP);
  pinMode(Digital5, INPUT_PULLUP);
  pinMode(Digital6, INPUT_PULLUP);
  pinMode(Digital7, INPUT_PULLUP);
  pinMode(Digital8, INPUT_PULLUP);
  pinMode(Digital9, INPUT_PULLUP);
  pinMode(Digital10, INPUT_PULLUP);
  pinMode(Digital11, INPUT_PULLUP);
  pinMode(Digital12, INPUT_PULLUP);
  pinMode(Digital13, INPUT_PULLUP);
  pinMode(Digital14, INPUT_PULLUP);
  pinMode(Digital15, INPUT_PULLUP);
  pinMode(Digital16, INPUT_PULLUP);
  pinMode(Digital17, INPUT_PULLUP);
  pinMode(Digital18, INPUT_PULLUP);
  pinMode(Digital19, INPUT_PULLUP);
  pinMode(Digital20, INPUT_PULLUP);
  pinMode(Digital21, INPUT_PULLUP);
  pinMode(Digital22, INPUT_PULLUP);
  pinMode(Digital23, INPUT_PULLUP);
  pinMode(Digital24, INPUT_PULLUP);
  pinMode(Digital25, INPUT_PULLUP);
  pinMode(Digital26, INPUT_PULLUP);
  pinMode(Digital27, INPUT_PULLUP);
  pinMode(Digital28, INPUT_PULLUP);
//  pinMode(Digital29, INPUT_PULLUP);
//  pinMode(Digital30, INPUT_PULLUP);
}

void loop() {  
  int Dig1 = digitalRead(Digital1);
  int Dig2 = digitalRead(Digital2);
  int Dig3 = digitalRead(Digital3);
  int Dig4 = digitalRead(Digital4);
  int Dig5 = digitalRead(Digital5);
  int Dig6 = digitalRead(Digital6);
  int Dig7 = digitalRead(Digital7);
  int Dig8 = digitalRead(Digital8);
  int Dig9 = digitalRead(Digital9);
  int Dig10 = digitalRead(Digital10);
  int Dig11 = digitalRead(Digital11);
  int Dig12 = digitalRead(Digital12);
  int Dig13 = digitalRead(Digital13);
  int Dig14 = digitalRead(Digital14);
  int Dig15 = digitalRead(Digital15);
  int Dig16 = digitalRead(Digital16);
  int Dig17 = digitalRead(Digital17);
  int Dig18 = digitalRead(Digital18);
  int Dig19 = digitalRead(Digital19);
  int Dig20 = digitalRead(Digital20);
  int Dig21 = digitalRead(Digital21);
  int Dig22 = digitalRead(Digital22);
  int Dig23 = digitalRead(Digital23);
  int Dig24 = digitalRead(Digital24);
  int Dig25 = digitalRead(Digital25);
  int Dig26 = digitalRead(Digital26);
  int Dig27 = digitalRead(Digital27);
  int Dig28 = digitalRead(Digital28);

  if(Dig1 != old_1){
    Serial.print("D20 changed /");
    Serial.print(old_1);
    Serial.print("/ to /");
    Serial.print(Dig1);
    Serial.println("/");
  }
  old_1 = Dig1;
    if(Dig2 != old_2){
    Serial.print("D21 changed /");
    Serial.print(old_2);
    Serial.print("/ to /");
    Serial.print(Dig2);
    Serial.println("/");
  }
  old_2 = Dig2;
    if(Dig3 != old_3){
    Serial.print("D22 changed /");
    Serial.print(old_3);
    Serial.print("/ to /");
    Serial.print(Dig3);
    Serial.println("/");
  }
  old_3 = Dig3;
    if(Dig4 != old_4){
    Serial.print("D24 changed /");
    Serial.print(old_4);
    Serial.print("/ to /");
    Serial.print(Dig4);
    Serial.println("/");
  }
  old_4 = Dig4;
    if(Dig5 != old_5){
    Serial.print("D26 changed /");
    Serial.print(old_5);
    Serial.print("/ to /");
    Serial.print(Dig5);
    Serial.println("/");
  }
  old_5 = Dig5;
    if(Dig6 != old_6){
    Serial.print("D28 changed /");
    Serial.print(old_6);
    Serial.print("/ to /");
    Serial.print(Dig6);
    Serial.println("/");
  }
  old_6 = Dig6;
    if(Dig7 != old_7){
    Serial.print("D30 changed /");
    Serial.print(old_7);
    Serial.print("/ to /");
    Serial.print(Dig7);
    Serial.println("/");
  }
  old_7 = Dig7;
    if(Dig8 != old_8){
    Serial.print("D32 changed /");
    Serial.print(old_8);
    Serial.print("/ to /");
    Serial.print(Dig8);
    Serial.println("/");
  }
  old_8 = Dig8;
    if(Dig9 != old_9){
    Serial.print("D34 changed /");
    Serial.print(old_9);
    Serial.print("/ to /");
    Serial.print(Dig9);
    Serial.println("/");
  }
  old_9 = Dig9;
    if(Dig10 != old_10){
    Serial.print("D36 changed /");
    Serial.print(old_10);
    Serial.print("/ to /");
    Serial.print(Dig10);
    Serial.println("/");
  }
  old_10 = Dig10;
    if(Dig11!= old_11){
    Serial.print("D38 changed /");
    Serial.print(old_11);
    Serial.print("/ to /");
    Serial.print(Dig11);
    Serial.println("/");
  }
  old_11 = Dig11;
    if(Dig12 != old_12){
    Serial.print("D40 changed /");
    Serial.print(old_12);
    Serial.print("/ to /");
    Serial.print(Dig12);
    Serial.println("/");
  }
  old_12 = Dig12;
    if(Dig13 != old_13){
    Serial.print("D42 changed /");
    Serial.print(old_13);
    Serial.print("/ to /");
    Serial.print(Dig13);
    Serial.println("/");
  }
  old_13 = Dig13;
    if(Dig14 != old_14){
    Serial.print("D44 changed /");
    Serial.print(old_14);
    Serial.print("/ to /");
    Serial.print(Dig14);
    Serial.println("/");
  }
  old_14 = Dig14;
    if(Dig15 != old_15){
    Serial.print("D46 changed /");
    Serial.print(old_15);
    Serial.print("/ to /");
    Serial.print(Dig15);
    Serial.println("/");
  }
  old_15 = Dig15;
    if(Dig16 != old_16){
    Serial.print("D48 changed /");
    Serial.print(old_16);
    Serial.print("/ to /");
    Serial.print(Dig16);
    Serial.println("/");
  }
  old_16 = Dig16;
    if(Dig17 != old_17){
    Serial.print("D50 changed /");
    Serial.print(old_17);
    Serial.print("/ to /");
    Serial.print(Dig17);
    Serial.println("/");
  }
  old_17 = Dig17;
    if(Dig18 != old_18){
    Serial.print("D52 changed /");
    Serial.print(old_18);
    Serial.print("/ to /");
    Serial.print(Dig18);
    Serial.println("/");
  }
  old_18 = Dig18;
    if(Dig19 != old_19){
    Serial.print("D23 changed /");
    Serial.print(old_19);
    Serial.print("/ to /");
    Serial.print(Dig19);
    Serial.println("/");
  }
  old_19 = Dig19;
    if(Dig20 != old_20){
    Serial.print("D25 changed /");
    Serial.print(old_20);
    Serial.print("/ to /");
    Serial.print(Dig20);
    Serial.println("/");
  }
  old_20 = Dig20;
    if(Dig21 != old_21){
    Serial.print("D27 changed /");
    Serial.print(old_21);
    Serial.print("/ to /");
    Serial.print(Dig21);
    Serial.println("/");
  }
  old_21 = Dig21;
    if(Dig22 != old_22){
    Serial.print("D29 changed /");
    Serial.print(old_22);
    Serial.print("/ to /");
    Serial.print(Dig22);
    Serial.println("/");
  }
  old_22 = Dig22;
    if(Dig23 != old_23){
    Serial.print("D31 changed /");
    Serial.print(old_23);
    Serial.print("/ to /");
    Serial.print(Dig23);
    Serial.println("/");
  }
  old_23 = Dig23;
    if(Dig24 != old_24){
    Serial.print("D33 changed /");
    Serial.print(old_24);
    Serial.print("/ to /");
    Serial.print(Dig24);
    Serial.println("/");
  }
  old_24 = Dig24;
    if(Dig25 != old_25){
    Serial.print("D35 changed /");
    Serial.print(old_25);
    Serial.print("/ to /");
    Serial.print(Dig25);
    Serial.println("/");
  }
  old_25 = Dig25;
    if(Dig26 != old_26){
    Serial.print("D37 changed /");
    Serial.print(old_26);
    Serial.print("/ to /");
    Serial.print(Dig26);
    Serial.println("/");
  }
  old_26 = Dig26;
    if(Dig27 != old_27){
    Serial.print("D39 changed /");
    Serial.print(old_27);
    Serial.print("/ to /");
    Serial.print(Dig27);
    Serial.println("/");
  }
  old_27 = Dig27;
    if(Dig28 != old_28){
    Serial.print("D41 changed /");
    Serial.print(old_28);
    Serial.print("/ to /");
    Serial.print(Dig28);
    Serial.println("/");
  }
  old_28 = Dig28;
//    if(Dig1 != old_1){
//    Serial.print("D43 changed /");
//    Serial.print(old_1 + "/ to /");
//    Serial.print(Dig1 + "/");
//  }
//    if(Dig1 != old_1){
//    Serial.print("D45 changed /");
//    Serial.print(old_1 + "/ to /");
//    Serial.print(Dig1 + "/");
//  }
  
//  Serial.print(Dig1);
//  Serial.print(Dig2);
//  Serial.print(Dig3);
//  Serial.print(Dig4);
//  Serial.print(Dig5);
//  Serial.print(Dig6);
//  Serial.print(Dig7);
//  Serial.print(Dig8);
//  Serial.print(" ");
//  Serial.print(Dig9);
//  Serial.print(Dig10);
//  Serial.print(Dig11);
//  Serial.print(Dig12);
//  Serial.print(Dig13);
//  Serial.print(Dig14);
//  Serial.print(Dig15);
//  Serial.print(Dig16);
//  Serial.print(" ");
//  Serial.print(Dig17);
//  Serial.print(Dig18);
//  Serial.print(Dig19);
//  Serial.print(Dig20);
//  Serial.print(Dig21);
//  Serial.print(Dig22);
//  Serial.print(Dig23);
//  Serial.print(Dig24);
//  Serial.print(" ");
//  Serial.print(Dig25);
//  Serial.print(Dig26);
//  Serial.print(Dig27);
//  Serial.println(Dig28);
  
  delay(1);        // delay in between reads for stability
}
