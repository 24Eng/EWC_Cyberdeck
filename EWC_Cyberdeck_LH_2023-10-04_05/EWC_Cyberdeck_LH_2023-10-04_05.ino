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
const int handleKeyCount = 4;
const int handleKeyPins[handleKeyCount] = {4, 5, 6, 7};
const int addressableLEDs = 12;
const int LEDCount = 8;
const int keyboardRowCount = 5;
const int keyboardRowPins[keyboardRowCount] = {0,1,2,3,4};
const int keyboardColumnCount = 8;

Adafruit_NeoPixel pixels(8, addressableLEDs, NEO_GRB + NEO_KHZ800);

// Delcare some variables
bool handleKeyStates[handleKeyCount];
bool handleKeyPreviousStates[handleKeyCount];
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
// 575 is Purple and 95 is yellow
int defaultColor[LEDCount] = {575, 575, 575, 575, 575, 575, 95, 95};
int startingColor[LEDCount] = {575, 575, 575, 575, 575, 575, 95, 95};
bool verboseFeedback = false;
byte incomingAddress[4];
int serialAddressPress = 0;
int serialAddressRelease = 0;
int serialCounter = 0;

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
  Serial1.begin(19200);
  startupLightShow(2);

  if (!pcf0.begin(0x20, &Wire)) {
    Serial.print(F("Couldn't find first PCF8574"));
//    while (1);
  }
  startupLightShow(3);

  if (!pcf1.begin(0x21, &Wire)) {
    Serial.print(F("Couldn't find second PCF8574"));
//    while (1);
  }
  startupLightShow(4);

  // Set all the IO expander's pins to inputs and activate their built-in pullup resistors
  for (uint8_t p = 0; p < 8; p++) {
    pcf0.pinMode(p, INPUT_PULLUP);
  }
  for (uint8_t p = 0; p < 8; p++) {
    pcf1.pinMode(p, OUTPUT);
  }
  pinMode(LED_BUILTIN, OUTPUT);

  for (int i = 0; i < keyboardRowCount; i++) {
    pinMode(keyboardRowPins[i], OUTPUT);
    digitalWrite(keyboardRowPins[i], HIGH);
  }

  startupLightShow(5);
  
  Keyboard.begin();
  
  startupLightShow(6);
  
  for (int i=0; i<handleKeyCount; i++){
    pinMode(handleKeyPins[i], INPUT_PULLUP);
  }
  
  startupLightShow(7);
  startupLightShow(0);
  for (int i=0; i < LEDCount; i++){
    fallingEdgeLightControl(i);
  }
}

void loop() {
  scanKeys();
  scanHandleKeys();
  if(serialActivity()){
    processSerial();
  }
  if(fallingEdgeOccured){
    actOnFallingEdges();
  }
  if(risingEdgeOccured || currentMode == 2){
    actOnRisingEdges();
  }
  if((fallingEdgeOccured || risingEdgeOccured)){
      //printButtonStates();
    digitalWrite(LED_BUILTIN, LEDState);
    LEDState = !LEDState;
  }
}
