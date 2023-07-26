#define BLYNK_TEMPLATE_ID "TMPLm4j2_Zgd" 
#define BLYNK_DEVICE_NAME "IoT project" 
#define BLYNK_AUTH_TOKEN "s8SiRdPCSAG2g2xsmvaO675zhHs4GiyU" 
#define BLYNK_PRINT Serial 
#include <ESP8266_Lib.h> 
#include <BlynkSimpleShieldEsp8266.h> 
char auth[] = BLYNK_AUTH_TOKEN; 
char ssid[] = "BossOfLords007";  //wifipassword 
char pass[] = "Krishna@2210"; //wifi name 
#include <SoftwareSerial.h> 
SoftwareSerial EspSerial(2, 3); 
#define ESP8266_BAUD 115200 
ESP8266 wifi(&EspSerial); 
#include <SPI.h> 
#include <MFRC522.h> 
#define SS_PIN 10 
#define RST_PIN 9 
MFRC522 mfrc522(SS_PIN, RST_PIN); 
const int pwm = 4 ; 
const int in_1 = 6 ; 
const int in_2 = 7 ; 
void setup() 
{ 
 Serial.begin(115200); 
 EspSerial.begin(ESP8266_BAUD); 
 delay(10); 
 Blynk.begin(auth, wifi, ssid, pass, "blynk.cloud", 80); 
 
 pinMode(pwm,OUTPUT) ; 
 pinMode(in_1,OUTPUT) ; 
 pinMode(in_2,OUTPUT) ; 
 Serial.begin(115200); 
 SPI.begin(); 
 mfrc522.PCD_Init(); 
 Serial.println("Approximate your card to the reader..."); 
 Blynk.virtualWrite(V0, "Approximate your card to the reader..."); 
 Blynk.virtualWrite(V1, "Approximate your card to the reader..."); 
 Serial.println(); 
}void setup() 
{ 
 Serial.begin(115200); 
 EspSerial.begin(ESP8266_BAUD); 
 delay(10); 
 Blynk.begin(auth, wifi, ssid, pass, "blynk.cloud", 80); 
 
 pinMode(pwm,OUTPUT) ; 
 pinMode(in_1,OUTPUT) ; 
 pinMode(in_2,OUTPUT) ; 
 Serial.begin(115200); 
 SPI.begin(); 
 mfrc522.PCD_Init(); 
 Serial.println("Approximate your card to the reader..."); 
 Blynk.virtualWrite(V0, "Approximate your card to the reader..."); 
 Blynk.virtualWrite(V1, "Approximate your card to the reader..."); 
 Serial.println(); 
} 
void loop() 
{ 
 Blynk.run(); 
 analogWrite(pwm,255) ; 
 if ( ! mfrc522.PICC_IsNewCardPresent()) 
 { 
 return; 
 } 
 if ( ! mfrc522.PICC_ReadCardSerial()) 
 { 
 return; 
 } 
 Serial.print("UID tag :"); 
 String content= ""; 
 byte letter; 
 for (byte i = 0; i < mfrc522.uid.size; i++) 
 { 
 Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "); 
 Serial.print(mfrc522.uid.uidByte[i], HEX); 
 content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " 
")); 
 content.concat(String(mfrc522.uid.uidByte[i], HEX)); 
 } 
 Serial.println(); 
 Serial.print("Message : "); 
 content.toUpperCase(); 
 if (content.substring(1) == "52 87 C2 1B") 
 { 
 Blynk.virtualWrite(V0, "Welcome back BossOfLords007"); 
 Blynk.virtualWrite(V1, "Welcome back BossOfLords007"); 
 //Blynk.virtualWrite(V0, "Access denied"); 
ARDUINO CODE: 
 //Blynk.virtualWrite(V1, "Access denied"); 
 Serial.println("Authorized access"); 
 Serial.println(); 
 delay(1000); 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,LOW) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,LOW) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(1000) ; 
 
 delay(3000); 
 } 
 else if (content.substring(1) == "52 FE 23 1B") 
 { 
 Blynk.virtualWrite(V0, "Welcome back Sakthivel"); 
 Blynk.virtualWrite(V1, "Welcome back Sakthivel"); 
 //Blynk.virtualWrite(V0, "Access denied"); 
 //Blynk.virtualWrite(V1, "Access denied"); 
 Serial.println("Authorized access"); 
 Serial.println(); 
 delay(1000); 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,LOW) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,LOW) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(1000) ; 
 
 delay(3000); 
 } 
 else if (content.substring(1) == "E3 14 B2 45") 
 { 
 Blynk.virtualWrite(V0, "Welcome back Aadit J"); 
 Blynk.virtualWrite(V1, "Welcome back Aadit J"); 
 //Blynk.virtualWrite(V0, "Access denied"); 
 //Blynk.virtualWrite(V1, "Access denied"); 
 Serial.println("Authorized access"); 
 Serial.println(); 
 delay(1000); 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,LOW) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,LOW) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ;

 
digitalWrite(in_1,HIGH) ; 
digitalWrite(in_2,HIGH) ; 
delay(1000) ; 
delay(3000); 
 } 
 else if (content.substring(1) == "30 72 EF 1C") 
 { 
 Blynk.virtualWrite(V0, "Welcome back Akash P"); 
 Blynk.virtualWrite(V1, "Welcome back Akash P"); 
 //Blynk.virtualWrite(V0, "Access denied"); 
 //Blynk.virtualWrite(V1, "Access denied"); 
 Serial.println("Authorized access"); 
 Serial.println(); 
 delay(1000); 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,LOW) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,LOW) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(1000) ; 
 
 delay(3000); 
 } 
 else { 
 Blynk.virtualWrite(V0, "Access denied"); 
 Blynk.virtualWrite(V1, "Access denied"); 
 Serial.println(" Access denied"); 
 delay(3000); 
 } 
} 
BLYNK_WRITE(V2) 
{ 
 Blynk.virtualWrite(V0, "Welcome back Web User"); 
 Blynk.virtualWrite(V1, "Welcome back Web User"); 
 delay(1000); 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,LOW) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,LOW) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(1000) ; 
 
 delay(3000); 
} 
BLYNK_WRITE(V3) 
{ 
 Blynk.virtualWrite(V0, "Welcome back Mobile User"); 
 Blynk.virtualWrite(V1, "Welcome back Mobile User"); 
 delay(1000); 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,LOW) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,LOW) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(10000) ; 
 digitalWrite(in_1,HIGH) ; 
 digitalWrite(in_2,HIGH) ; 
 delay(1000) ; 
 
 delay(3000); 
}