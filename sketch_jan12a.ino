/*Blink LED Sketch
by Juvenal Lwamba 1-12-2026*/

void setup() {
  pinMode(13, OUTPUT); //set digital pin13 to output
  
}

void loop() {
 digitalWrite(13, HIGH); // turn on digital pin13
 delay(250); //pause for 1 second 
 digitalWrite(13, LOW);  // turn off digital pin13
 delay(250); //pause for 1 second

}
