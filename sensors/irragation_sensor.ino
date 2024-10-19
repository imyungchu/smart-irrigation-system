#include <DHT.h> 
 
//i//nt pinDHT11 = 2;
//SimpleDHT11 dht11;
 
DHT dht(2, DHT22);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
    
    Serial.println("{");
    Serial.print("Humidity = ");   
    Serial.print(dht.readHumidity());   
    Serial.print("%;");   
    Serial.print("Temperature = ");   
    Serial.print(dht.readTemperature());   
    Serial.println("C;");  
    Serial.println("}"); 
 
    delay(3000);  //每3秒顯示一次
}