int pin=4;
int doorStatus;
void setup() {
  Serial.begin(9600);
pinMode(4,INPUT); 
pinMode(13,OUTPUT);
}

void loop() {
  doorStatus=getDoorStatus(pin);
if(doorStatus==1){
  Serial.println("ON");
  digitalWrite(13,1);
  }
  else{
  Serial.println("OFF");
  digitalWrite(13,0);
}
}
int getDoorStatus(int pin){
  return (int)digitalRead(4);
}

