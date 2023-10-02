const int sensor_pin = A0;  /* Connect Soil moisture analog sensor pin to A0 of NodeMCU */

void setup() {
  Serial.begin(9600); /* Define baud rate for serial communication */
}

void loop() {
  float moisture_percentage;

  moisture_percentage = ( 100.00 - ( (analogRead(sensor_pin)/1023.00) * 100.00 ) );

  Serial.print("Soil Moisture(in Percentage) = ");
  Serial.print(moisture_percentage);
  Serial.println("%");
  if (moisture_percentage<=20){
    Serial.println("Put a lot more water!");
  }
  else if(moisture_percentage<=40 && moisture_percentage>20){
    Serial.println("Put more water!");}
  else if(moisture_percentage<=45 && moisture_percentage>40 ){
    Serial.println("Put very little water!");}
  else if(moisture_percentage>45 && moisture_percentage<55){
    Serial.println("Perfect amount of water!");
  }
  else if (moisture_percentage>=55 && moisture_percentage<75){
    Serial.println("Put some more dry waste!");
  }
  else if(moisture_percentage>=75 && moisture_percentage<100){
    Serial.println("Put a lot more dry waste!");
  }
  delay(500);
}
