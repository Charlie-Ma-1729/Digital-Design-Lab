#define C3 131 //10
#define C3s 139 //11
#define D3 147 //2
#define E3 165 //3
#define F3 175 //4
#define F3s 185.5 //A4
#define G3 196 //A5
#define A3 220 //A2
#define B3 247 //A1
#define C4 262 //A0
int melody[14] = {
  C3, C3, G3, G3, A3, A3, G3, F3, F3, E3, E3, D3, D3, C3
};
int LED[14] = {
  10, 10, A5, A5, A2, A2, A5, 4, 4, 3, 3, 2, 2, 10
};
int nD[14] = {
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 2
};

int melody2[24] = {
  F3s, A3, A3, D3, E3, A3, A3, D3, C3s, D3, B3, A3, G3, F3s, G3, B3, A3, F3s, D3, G3, F3s, G3, A3, E3
};
int LED2[24] = {
  A4, A2, A2, 2, 3, A2, A2, 2, 11, 2, A1, A2, A5, A4, A5, A1, A2, A4, 2, A5, A4, A5, A2, 3
};

int nD2[24] = {
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 1
};


int buttonState = 0;
int cs = 1;
int ChangeM = 0;
void m1() {
  cs = 1;
  for (int tN = 0; tN < 14; tN++) {
    Serial.println(buttonState);
    int noteD = 1000 / nD[tN];
    tone(8, melody[tN], noteD);
    digitalWrite(LED[tN], HIGH);
    int pBN = noteD * 1.3;
    delay(pBN);
    noTone(8);
    digitalWrite(LED[tN], LOW);
    buttonState = digitalRead(6);
    if (buttonState == LOW) {
      ChangeM = 1;
      break;
    }
  }
}
void m2() {
  cs = 2;
  for (int tN = 0; tN < 24; tN++) {
    Serial.println(buttonState);
    int noteD = 1000 / nD2[tN];
    tone(8, melody2[tN], noteD);
    digitalWrite(LED2[tN], HIGH);
    int pBN = noteD * 1.3;
    delay(pBN);
    noTone(8);
    digitalWrite(LED2[tN], LOW);
    buttonState = digitalRead(6);
    if (buttonState == LOW) {
      ChangeM = 1;
      break;
    }
  }
}

void setup() {
  pinMode(0, OUTPUT);

  pinMode(1, OUTPUT);

  pinMode(2, OUTPUT);

  pinMode(3, OUTPUT);

  pinMode(4, OUTPUT);

  pinMode(A0, OUTPUT);

  pinMode(A1, OUTPUT);

  pinMode(A2, OUTPUT);

  pinMode(A3, OUTPUT);

  pinMode(A4, OUTPUT);

  pinMode(6, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (ChangeM == 1 && cs == 1) {
    ChangeM = 0;
    Serial.println("tom2");
    m2();
  } else if (ChangeM == 1 && cs == 2) {
    ChangeM = 0;
    Serial.println("tom1");
    m1();
  } else if (cs == 2) {
    m2();
  } else {
    m1();
  }
  delay(200);
}
