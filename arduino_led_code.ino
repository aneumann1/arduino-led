int blueLED = 3;
int yellowLED = 4;
void setup() {
pinMode(blueLED,OUTPUT);  
pinMode(yellowLED,OUTPUT);
}

void loop() {
 digitalWrite(blueLED,HIGH);
 delay(1000);
digitalWrite(blueLED,LOW);
delay(1000);
digitalWrite(yellowLED,HIGH);
delay(2000);
digitalWrite(yellowLED,LOW);
delay(2000);
}
