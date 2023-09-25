/*
  Includes Adafruit's "Adafruit_PCF8574" and "NeoPixel" libraries. Please support Adafruit by buying their merch.

  This project was designed on an "Arduino Micro" board

  EWC_Cyberdeck by Brian McEvoy
  24 Hour Engineer
  https://www.24hourengineer.com/
*/

#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_PCF8574.h>
Adafruit_PCF8574 pcf0;
Adafruit_PCF8574 pcf1;

#include <Adafruit_NeoPixel.h>

#include "Keyboard.h"

// Declare the pins
const int addressableLEDs = 12;
const int LEDCount = 8;
const int keyboardRowCount = 5;
const int keyboardRowPins[keyboardRowCount] = {4,5,6,7,8};
const int keyboardColumnCount = 12;

Adafruit_NeoPixel pixels(8, addressableLEDs, NEO_GRB + NEO_KHZ800);

// Delcare some variables
int maxBrightness = 100;
//bool risingEdges[keyboardRowCount][keyboardColumnCount];
//bool fallingEdges[keyboardRowCount][keyboardColumnCount];
bool buttonStates[keyboardRowCount][keyboardColumnCount];
bool previousButtonStates[keyboardRowCount][keyboardColumnCount];
int risingEdgeQueue[6];
int fallingEdgeQueue[6];
int risingEdgeCounter = 0;
int fallingEdgeCounter = 0;
bool risingEdgeOccured = false;
bool fallingEdgeOccured = false;
bool LEDState = false;
//int defaultColor[LEDCount] = {767, 671, 575, 479, 383, 287, 191, 95};
int defaultColor[LEDCount] = {575, 575, 575, 95, 95, 95, 95, 95};
bool verboseFeedback = true;

long fullCycleTimer = 0;
int cycleTimeMax = 0;
int currentMode = 0;


void setup() {
  pixels.begin(); // INITIALIZE NeoPixel strip
  pixels.clear(); // Set all pixel colors to 'off'
  startupLightShow(1);

//  while (!Serial) { delay(1); }
  Serial.begin(115200);
  Serial.print(F("EWC_Cyberdeck\n"));
  startupLightShow(2);

  if (!pcf0.begin(0x20, &Wire)) {
    Serial.print(F("Couldn't find first PCF8574"));
//    while (1);
  }
  startupLightShow(3);

  if (!pcf1.begin(0x21, &Wire)) {
    Serial.print(F("Couldn't find second PCF8574"));
    while (1);
  }
  startupLightShow(4);

  // Set all the IO expander's pins to inputs and activate their built-in pullup resistors
  for (uint8_t p = 0; p < 8; p++) {
    pcf0.pinMode(p, INPUT_PULLUP);
  }
  for (uint8_t p = 0; p < 8; p++) {
    pcf1.pinMode(p, INPUT_PULLUP);
  }
  pinMode(LED_BUILTIN, OUTPUT);

  for (int i = 0; i < keyboardRowCount; i++) {
    pinMode(keyboardRowPins[i], OUTPUT);
    digitalWrite(keyboardRowPins[i], HIGH);
  }

  startupLightShow(5);
  
  Keyboard.begin();
  
  startupLightShow(6);
  startupLightShow(7);
  startupLightShow(0);
  for (int i=0; i < LEDCount; i++){
    fallingEdgeLightControl(i);
  }
}

void loop() {
    scanKeys();
    if(fallingEdgeOccured){
      actOnFallingEdges();
    }
    if(risingEdgeOccured){
      actOnRisingEdges();
    }
    if((fallingEdgeOccured || risingEdgeOccured)){
//      printButtonStates();
      digitalWrite(LED_BUILTIN, LEDState);
      LEDState = !LEDState;
    }
    
}
