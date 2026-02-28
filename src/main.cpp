#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author naitik sharma
 * @date 2026-02-28
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 */

#include <DHT.h>

// TODO 1:
// Define the DHT data pin (Use digital pin 2)
#define DHTPIN 2

// TODO 2:
// Define the DHT sensor type (DHT11)
#define DHTTYPE DHT11

// TODO 3:
// Create a DHT object using the defined pin and sensor type
DHT dht(DHTPIN, DHTTYPE);

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 5:
    // Initialize the DHT sensor
    dht.begin();

    // TODO 6:
    // Print a system initialization message
    Serial.println("DHT11 Temperature & Humidity Monitoring System Started...");
}

void loop() {

    // TODO 7:
    // Read humidity value from sensor
    float humidity = dht.readHumidity();

}