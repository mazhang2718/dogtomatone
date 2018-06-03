/* Photocell simple testing sketch. 
 
Connect one end of the photocell to 5V, the other end to Analog 0.
Then connect one end of a 10K resistor from Analog 0 to ground
 
For more information see http://learn.adafruit.com/photocells */
 
int photocellPin = 0;     // the cell and 10K pulldown are connected to a0
int potPin = 1;
int photocellReading;     // the analog reading from the analog resistor divider
int potReading;

void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(115200);   
}
 
void loop(void) {
  photocellReading = analogRead(photocellPin);  
  //Serial.print(photocellReading);
  potReading = analogRead(potPin);
  Serial.write(255);
  Serial.write(potReading >> 3);
  Serial.write(potReading & 7);
     
  // We'll have a few threshholds, qualitatively determined
  if (photocellReading < 10) {
    Serial.write(0);
  } else {
    Serial.write(1);
  }
  
  delay(100);
}
