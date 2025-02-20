int buttonPin = 4;
void setup() {
  pinMode(buttonPin, INPUT); // Sets the buttonPin to an input 
  Serial.begin(9600); // Initializes the serial communication
}

void loop() {
  int read=digitalRead(buttonPin); // Sets variable read to the button state
  Serial.println(read); //Prints the button state in the serial communication
  delay(100); 
}
