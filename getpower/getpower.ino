int powerPin=3;
boolean powerStatus;
void setup() {
  Serial.begin(9600);
  pinMode(powerPin,INPUT);
}

void loop() {
powerStatus=getPowerStatus(powerPin);
if(powerStatus==true)
  Serial.println("ON");
else 
  Serial.println("OFF");
 Serial.println("*************");
}

boolean getPowerStatus(int powerPin)
  return (boolean)digitalRead(3);
}

