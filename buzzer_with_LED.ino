#define C3 131
#define C3s 139
#define D3 147
#define D3s 155.5
#define E3 165
#define F3 175
#define F3s 185.5
#define G3 196
#define G3s 207.5
#define A 220
#define A3s 234
#define B3 247
#define C4 262
#define D4 294
#define E4 330

#define ROW1 2
#define ROW2 3
#define ROW3 4
#define ROW4 5
#define ROW5 7
#define ROW6 13
#define ROW7 A4
#define ROW8 A5

#define COL1 9
#define COL2 10
#define COL3 11
#define COL4 12
#define COL5 A3
#define COL6 A2
#define COL7 A1
#define COL8 A0

const int row[] = {
  ROW1, ROW2, ROW3, ROW4, ROW5, ROW6, ROW7, ROW8
};

const int col[] = {
  COL1, COL2, COL3, COL4, COL5, COL6, COL7, COL8
};


int melody[27] = {
  C3, D3, C3, E3, 0, E3, 0, D3, C3, 0, D3, 0, G3, 0, G3, 0, D3, E3, D3, 0, F3, 0, F3, 0, G3, A, 0
};
int nD[27] = {
  4, 8, 4, 6, 6, 6, 6, 6, 8, 4, 10, 3, 4, 5, 4, 6, 4, 8, 4, 3, 6, 6, 6, 4, 6, 6, 1
};

int melody2[162] = {
  E3, F3, G3, A, 0, E3, 0, G3, 0, G3s, A, 0, E3, F3, G3, A, 0, B3, 0, B3, 0, A3s, A, 0, D3, E3, F3, G3, 0, D3, 0, F3, 0, F3s, G3, 0, D3, E3, F3, G3, 0, A, 0, A, 0, G3s, G3, 0, E3, F3, G3, A, 0, E3,0, G3, 0, G3s, A, 0, E3, F3, G3, A, A3s, A, 0, G3s, A, B3, C4, D4, 0, A, B3, C4, D4, E4, C4,0, G3, E3, 0, G3, E3, 0, G3, E3, 0, G3, G3, A, G3, E3, F3, 0, F3, D3, 0, F3, D3, 0, F3, D3, 0, F3, A, B3, A, F3, E3, 0, G3, E3, 0, G3, E3, 0, G3, E3, 0, G3, C4, D4, C4, A3s, A, 0, C4, G3s, 0, C4, G3s, 0, C4, G3s, 0, G3s, G3s, C4, A3s, G3s, G3, 0, E3, F3, G3, A, E3, E3, F3, 0, E3, F3, 0, E3, G3,0, E3, D3s, D3, C3  
};

int nD2[162] = {
6,6,6,6,6,6,6,6,6,6,2,3,6,6,6,6,6,6,6,6,6,6,2,3,6,6,6,6,6,6,6,6,6,6,2,3,6,6,6,6,6,6,6,6,6,6,2,3,6,6,6,6,6,6,6,6,6,6,2,5,5,5,5,5,5,1,6,6,6,6,6,6,6,6,6,6,2,3,1,1,6,3,6,6,3,6,6,3,6,6,6,6,6,6,2,1,6,3,6,6,3,6,6,3,6,6,6,6,6,6,2,1,6,3,6,6,3,6,6,3,6,6,6,6,6,6,2,1,6,3,6,6,3,6,6,3,6,6,6,6,6,6,2,6,6,6,6,2,2,6,3,6,6,3,6,6,3,6,6,6,3,1
};

byte scan[8][8] = {
  { 1, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 1, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 1, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 1, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 1, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 1, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 1 }
};

byte circle[8][8] = {
  { 1, 1, 0, 0, 0, 0, 1, 1 },
  { 1, 0, 1, 1, 1, 1, 0, 1 },
  { 0, 1, 1, 1, 1, 1, 1, 0 },
  { 0, 1, 1, 1, 1, 1, 1, 0 },
  { 0, 1, 1, 1, 1, 1, 1, 0 },
  { 0, 1, 1, 1, 1, 1, 1, 0 },
  { 1, 0, 1, 1, 1, 1, 0, 1 },
  { 1, 1, 0, 0, 0, 0, 1, 1 }
};

byte yee[8][8] = {
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 1, 0, 1, 1, 1, 1, 0, 1 },
  { 1, 1, 0, 1, 1, 0, 1, 1 },
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 1, 1, 1, 0, 1, 0, 1, 1 },
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 1, 1, 0, 0, 0, 0, 1, 1 },
  { 1, 1, 1, 0, 0, 1, 1, 1 }
};

byte M[8][8] = {
  { 1, 1, 1, 1, 1, 1, 1, 1 },
  { 1, 0, 1, 1, 1, 1, 0, 1 },
  { 1, 0, 0, 1, 1, 0, 0, 1 },
  { 1, 0, 1, 0, 0, 1, 0, 1 },
  { 1, 0, 1, 1, 1, 1, 0, 1 },
  { 1, 0, 1, 1, 1, 1, 0, 1 },
  { 1, 0, 1, 1, 1, 1, 0, 1 },
  { 1, 1, 1, 1, 1, 1, 1, 1 }
};
void showPattern(byte matrix[8][8]);
int buttonState = 0;
int cs = 1;
int ChangeM = 0;
long pBN = 0;
long pt = 0;
long nt = 0;
int tN = -1;
int noteD = 0;
void m1() {
  cs = 1;
  nt = millis();
  if (nt - pt >= pBN) {
    tN += 1;

    if (tN >= 27) {
      tN = -1;
      pBN = 1000;
      pt = millis();
    } else {
      noteD = 1000 / nD[tN];
      tone(8, melody[tN], noteD);
      pBN = noteD * 1.2;
      pt = millis();
    }
  }
}
void m2() {
  cs = 2;
  nt = millis();
  if (nt - pt >= pBN) {
    tN += 1;

    if (tN >= 162) {
      tN = -1;
      pBN = 1000;
      pt = millis();
    } else {
      noteD = 1000 / nD2[tN];
      tone(8, melody2[tN], noteD);
      pBN = noteD * 1.2;
      pt = millis();
    }
  }
}


void showPattern(byte matrix[8][8]) {
  for (byte i = 0; i < 8; i++) {
    for (byte j = 0; j < 8; j++) {
      digitalWrite(row[j], 1 - scan[i][j]);
      digitalWrite(col[j], 1 - matrix[i][j]);
    }
    for (byte j = 0; j < 8; j++) {
      digitalWrite(row[j], HIGH);
      digitalWrite(col[j], LOW);
    }
  }
}


void setup() {

  pinMode(2, OUTPUT);

  pinMode(3, OUTPUT);

  pinMode(4, OUTPUT);

  pinMode(5, OUTPUT);

  pinMode(7, OUTPUT);

  pinMode(13, OUTPUT);

  pinMode(A0, OUTPUT);

  pinMode(A1, OUTPUT);

  pinMode(A2, OUTPUT);

  pinMode(A3, OUTPUT);

  pinMode(A4, OUTPUT);

  pinMode(A5, OUTPUT);

  pinMode(12, OUTPUT);

  pinMode(11, OUTPUT);

  pinMode(10, OUTPUT);

  pinMode(9, OUTPUT);

  pinMode(6, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (ChangeM == 1 && cs == 1) {
    ChangeM = 0;
    Serial.println("tom2");
    showPattern(M);
    m2();
    buttonState = digitalRead(6);
    if (buttonState == LOW) {
      ChangeM = 1;
    }
  } else if (ChangeM == 1 && cs == 2) {
    ChangeM = 0;
    Serial.println("tom1");
    showPattern(yee);
    m1();
    buttonState = digitalRead(6);
    if (buttonState == LOW) {
      ChangeM = 1;
    }
  } else if (cs == 2) {
    showPattern(M);
    m2();
    buttonState = digitalRead(6);
    if (buttonState == LOW) {
      ChangeM = 1;
    }
  } else {
    showPattern(yee);
    m1();
    buttonState = digitalRead(6);
    if (buttonState == LOW) {
      ChangeM = 1;
    }
  }
}
