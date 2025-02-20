int buttonPin=4; // Initiallized pin 4 
void setup() {
pinMode(buttonPin, INPUT_PULLUP); // Sets pin 4 to an input with an internal pullup resistor
Serial.begin(9600);
}

void loop() {
int read = digitalRead(buttonPin); // Reads the signal and stores it in a variable
Serial.println(read); // Reads the variable and displays in serial communication
delay(100);
}