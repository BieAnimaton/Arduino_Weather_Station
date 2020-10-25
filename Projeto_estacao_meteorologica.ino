#include <LiquidCrystal.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define PinoDHT11 8
#define TipoDHT DHT11

DHT_Unified dht(PinoDHT11, TipoDHT);
