#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// LCD address and size
LiquidCrystal_I2C lcd(0x27, 16, 2);

// DHT11 configuration
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// Other component pins
#define RAIN_PIN A0
#define BUZZER_PIN 8
#define LED_PIN 9

// Initial rain threshold
int rainThreshold = 670;

void setup() {

  Serial.begin(9600);

  // Start DHT11
  dht.begin();

  // Start LCD
  lcd.init();
  lcd.backlight();

  // Configure output pins
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  lcd.setCursor(0, 0);
  lcd.print("RAIN ALERT");
  
  lcd.setCursor(0, 1);
  lcd.print("SYSTEM STARTING");

  delay(2000);

  lcd.clear();
}

void loop() {

  // Read temperature and humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Read rain sensor
  int rainValue = analogRead(RAIN_PIN);

  // Detect rain
  bool rainDetected = (rainValue <= rainThreshold);

  // Control LED and buzzer
  if (rainDetected) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
  }

  // Display temperature and humidity
  lcd.setCursor(0, 0);

  if (isnan(temperature) || isnan(humidity)) {
    lcd.print("DHT11 READ ERROR");
  }
  else {
    lcd.print("T:");
    lcd.print(temperature, 1);
    lcd.print("C H:");
    lcd.print(humidity, 0);
    lcd.print("%   ");
  }

  // Display rain condition
  lcd.setCursor(0, 1);

  if (rainDetected) {
    lcd.print("RAIN DETECTED   ");
  }
  else {
    lcd.print("NO RAIN         ");
  }

  // Serial Monitor information
  Serial.print("Temperature: ");
  Serial.print(temperature);

  Serial.print(" C | Humidity: ");
  Serial.print(humidity);

  Serial.print(" % | Rain Value: ");
  Serial.print(rainValue);

  Serial.print(" | Condition: ");

  if (rainDetected) {
    Serial.println("RAIN DETECTED");
  }
  else {
    Serial.println("NO RAIN");
  }

  delay(2000);
}