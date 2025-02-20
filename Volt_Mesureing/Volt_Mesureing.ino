int readVal;
int read=A3;
float V2 = 0;
int del = 500;
void setup() {
pinMode(read, INPUT);
Serial.begin(9600);
}

void loop() {

readVal=analogRead(read);
V2=(5.03/1023.) *readVal;
Serial.println(V2);
delay(del);
}
