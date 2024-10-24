// Define the pin numbers for each segment of the 7-segment display
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

// Array to hold the segments of each digit (0-9)
int numbers[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},  // 0
  {0, 1, 1, 0, 0, 0, 0},  // 1
  {1, 1, 0, 1, 1, 0, 1},  // 2
  {1, 1, 1, 1, 0, 0, 1},  // 3
  {0, 1, 1, 0, 0, 1, 1},  // 4
  {1, 0, 1, 1, 0, 1, 1},  // 5
  {1, 0, 1, 1, 1, 1, 1},  // 6
  {1, 1, 1, 0, 0, 0, 0},  // 7
  {1, 1, 1, 1, 1, 1, 1},  // 8
  {1, 1, 1, 1, 0, 1, 1}   // 9
};

void setup() {
  // Set each segment pin as an output
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    displayDigit(i); // Display digits 0-9
    delay(1000);     // Wait for 1 second
  }
}

// Function to display a digit
void displayDigit(int num) {
  digitalWrite(a, numbers[num][0]);
  digitalWrite(b, numbers[num][1]);
  digitalWrite(c, numbers[num][2]);
  digitalWrite(d, numbers[num][3]);
  digitalWrite(e, numbers[num][4]);
  digitalWrite(f, numbers[num][5]);
  digitalWrite(g, numbers[num][6]);
}