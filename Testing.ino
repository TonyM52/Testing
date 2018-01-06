void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

char  Statename [] = "No Press";
Serial.print ("Statename is "); Serial.println (Statename);
delay(1000);
}
