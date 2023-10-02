#define BLYNK_TEMPLATE_ID           "TMPL3ajxv3soA"
#define BLYNK_TEMPLATE_NAME         "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "" //change with your blynk auth token



#include <DHT11.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "Hsethia";
char pass[] = ""; // change with your wifi password and ssid (mkae sure it's 2.4Ghz)


BlynkTimer timer;

// V1 LED Widget is blinking
BLYNK_WRITE(V0)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  // You can also use:
  if (pinValue == 1){
    digitalWrite(4, LOW);
  }
  else {
    digitalWrite(4, HIGH);
  }

  



}
DHT11 dht11(2);
const int sensor_pin = A0;
void setup() {
  // put your setup code here, to run once:
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  Blynk.virtualWrite(V4, "Do this: Put a");
  Blynk.run();
  timer.run();
  float moisture_percentage;

  moisture_percentage = ( 100.00 - ( (analogRead(sensor_pin)/1023.00) * 100.00 ) );

  Serial.print("Soil Moisture(in Percentage) = ");
  Serial.print(moisture_percentage);
  Serial.println("%");
  if (moisture_percentage<=20){
    Serial.println("lot more water!");
    Blynk.virtualWrite(V5, "Put a lot more water!");
  }

  else if(moisture_percentage<=40 && moisture_percentage>20){
    Serial.println("Put more water!");
    Blynk.virtualWrite(V5, "Put more water!");
    }

  else if(moisture_percentage<=45 && moisture_percentage>40 ){
    Serial.println("Put little water!");
    Blynk.virtualWrite(V5, "Put little water!");
    }

  else if(moisture_percentage>45 && moisture_percentage<55){
    Serial.println("Perfect amount of water!");
    Blynk.virtualWrite(V5, "Perfect amount of water!");
  }

  else if (moisture_percentage>=55 && moisture_percentage<75){
    Serial.println("Put some dry waste!");
    Blynk.virtualWrite(V5, "Put some dry waste!");
  }

  else if(moisture_percentage>=75 && moisture_percentage<100){
    Serial.println("a lot of dry waste!");
    Blynk.virtualWrite(V5, "lot of dry waste!");
  }

  delay(5000);

   int temperature = dht11.readTemperature();

   

    int humidity = dht11.readHumidity();

  
    if (temperature != DHT11::ERROR_CHECKSUM && temperature != DHT11::ERROR_TIMEOUT &&
        humidity != DHT11::ERROR_CHECKSUM && humidity != DHT11::ERROR_TIMEOUT)
    {
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.println(" °C");
        Blynk.virtualWrite(V6, temperature," C");


        Serial.print("Humidity: ");
        Serial.print(humidity);
        Serial.println(" %");
        Blynk.virtualWrite(V7, humidity,"%");
    }
    else
    {
        if (temperature == DHT11::ERROR_TIMEOUT || temperature == DHT11::ERROR_CHECKSUM)
        {
            Serial.print("Temperature Reading Error: ");
            Serial.println(DHT11::getErrorString(temperature));
        }
        if (humidity == DHT11::ERROR_TIMEOUT || humidity == DHT11::ERROR_CHECKSUM)
        {
            Serial.print("Humidity Reading Error: ");
            Serial.println(DHT11::getErrorString(humidity));
        }
    }



  

}


