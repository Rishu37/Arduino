#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for SSD1306 display connected using hardware SPI
#define OLED_DC     8
#define OLED_CS     10
#define OLED_RESET  9
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &SPI, OLED_DC, OLED_RESET, OLED_CS);

int inputPin = 2; // Pin where the Radar Sensor is hooked up
int motion = 0;   // State of motion

void setup() {
  pinMode(inputPin, INPUT); // Declare the sensor pin as input
  Serial.begin(9600);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display.begin(SSD1306_SWITCHCAPVCC)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }

  display.clearDisplay(); // Clear the buffer

  // Set text size and color
  display.setTextSize(2);             // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE); // Draw white text
  display.setCursor(0, 0);            // Start at top-left corner

  // Print the initial message
  display.println(F("Hello world"));
  display.println(F("My name is Rishabh"));

  display.display(); // Show the display buffer on the screen
}

void loop() {
  motion = digitalRead(inputPin); // Read the input pin

  display.clearDisplay(); // Clear the buffer

  if (motion == HIGH) {
    Serial.println("Motion Detected!");
    display.setCursor(0, 0);
    display.println(F("Human Detected"));
  } else {
    Serial.println("No Motion Detected!");
    display.setCursor(0, 0);
    display.println(F("No Motion Detected"));
  }

  display.display(); // Show the display buffer on the screen
  delay(500); // Add a delay to avoid flickering
}
