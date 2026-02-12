const int redPin = 1;
const int yellowPin = 2;
const int greenPin = 3;

const int redPin2 = 4;
const int yellowPin2 = 5;
const int greenPin2 = 6;

const int redPin3 = 7;
const int yellowPin3 = 8;
const int greenPin3 = 9;

void setup() {
  // Set all traffic light pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  pinMode(redPin2, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
  pinMode(greenPin2, OUTPUT);

  pinMode(redPin3, OUTPUT);
  pinMode(yellowPin3, OUTPUT);
  pinMode(greenPin3, OUTPUT);
}

void loop() {
  //  Cycle 1: Traffic 1 - Green, Others - Red
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);

  digitalWrite(redPin2, HIGH);
  digitalWrite(yellowPin2, LOW);
  digitalWrite(greenPin2, LOW);

  digitalWrite(redPin3, HIGH);
  digitalWrite(yellowPin3, LOW);
  digitalWrite(greenPin3, LOW);
  delay(3000);

  //  Yellow warning before red for Traffic 1
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(1000);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);

  //  Cycle 2: Traffic 2 - Green, Others - Red
  digitalWrite(greenPin2, HIGH);
  delay(3000);
  digitalWrite(greenPin2, LOW);
  digitalWrite(yellowPin2, HIGH);
  delay(1000);
  digitalWrite(yellowPin2, LOW);
  digitalWrite(redPin2, HIGH);

  //  Cycle 3: Traffic 3 - Green, Others - Red
  digitalWrite(redPin, HIGH);
  digitalWrite(redPin2, HIGH);
  digitalWrite(redPin3, LOW);
  digitalWrite(greenPin3, HIGH);
  delay(3000);
  digitalWrite(greenPin3, LOW);
  digitalWrite(yellowPin3, HIGH);
  delay(1000);
  digitalWrite(yellowPin3, LOW);
  digitalWrite(redPin3,HIGH);
}