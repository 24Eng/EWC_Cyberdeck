void printButtonStates(){
  for (int i = keyboardRowCount-1; i >= 0; i--) {
    for (int k = keyboardColumnCount-1; k >= 0; k--) {
      Serial.print(buttonStates[i][k]);
      Serial.print(" ");
    }
    Serial.print("\n");
  }
  Serial.print("\n\n");
}

void actOnHighButtonStates(){
  bool funButtonPressed = LOW;
  for (int i = 0; i < keyboardRowCount; i++) {
    for (int k = 0; k < keyboardColumnCount; k++) {
      if (buttonStates[i][k]) {
        funButtonPressed = HIGH;
      }
    }
  }
  if (funButtonPressed) {
    pixels.setPixelColor(0, pixels.Color(0, 0, maxBrightness));
    pixels.show();
  }else{
    pixels.clear();
    pixels.show();
  }
}

void actOnRisingEdges() {
  for(int m=5;m>=0;m--){
    if(risingEdgeQueue[m] != 0){
      // Press buttons
      pressMode00(risingEdgeQueue[m]);
      risingEdgeQueue[m] = 0;
    }
  }
}

void actOnFallingEdges() {
  for(int m=5;m>=0;m--){
    if(fallingEdgeQueue[m] != 0){
      // Release buttons
      releaseMode00(fallingEdgeQueue[m]);
      fallingEdgeQueue[m] = 0;
    }
  }
}

void timeCycleStart(){
  fullCycleTimer = millis();
}
void timeCycleStop(){
  fullCycleTimer = millis() - fullCycleTimer;
  Serial.print(F("Full "));
  Serial.print(fullCycleTimer);
  Serial.print("\t");
  if((fullCycleTimer > cycleTimeMax) && fullCycleTimer < 3000){
    cycleTimeMax = fullCycleTimer;
  }
  
  Serial.print(F("Max "));
  Serial.print(cycleTimeMax);
  Serial.print("\n\n");
}

int scanKeys() {
  int funRisenEdge = 0;
  int funFallenEdge = 0;
  risingEdgeCounter = 0;
  fallingEdgeCounter = 0;
  risingEdgeOccured = false;
  fallingEdgeOccured = false;
  for (int i = 0; i < keyboardRowCount; i++) {
    digitalWrite(keyboardRowPins[i], LOW);
    for (int k = 0; k < keyboardColumnCount/2; k++) {
      buttonStates[i][k] = !pcf0.digitalRead(k);
      buttonStates[i][k + keyboardColumnCount/2] = !pcf1.digitalRead(k);
      if (buttonStates[i][k] && !previousButtonStates[i][k]) {
        // If the current and previous state indicate a rising edge...
        risingEdgeLightControl(i);
        risingEdgeOccured = true;
        funRisenEdge = ((100 * i) + k) + 101;
        risingEdgeQueue[risingEdgeCounter] = funRisenEdge;
        risingEdgeCounter++;
        if(risingEdgeCounter >= 6){
          // If there are more than six rising edges, someone is mashing the keyboard
          risingEdgeCounter = 0;
          errorLight();
          Keyboard.releaseAll();
        }
        if(verboseFeedback){
          Serial.print("Press: ");
          Serial.print(funRisenEdge);
          Serial.print("\n");
        }
        Serial1.print("P");
        Serial1.print(funRisenEdge);
        Serial1.print("\n");
      }
      if (!buttonStates[i][k] && previousButtonStates[i][k]) {
        // If the current and previous state indicate a falling edge...
        fallingEdgeLightControl(i);
        fallingEdgeOccured = true;
        funFallenEdge = ((100 * i) + k) + 101;
        fallingEdgeQueue[fallingEdgeCounter] = funFallenEdge;
        fallingEdgeCounter++;
        if(fallingEdgeCounter >= 6){
          // If there are more than six falling edges, someone has mashed the keyboard
          fallingEdgeCounter = 0;
        }
        if(verboseFeedback){
//          Serial.print("Relse: ");
//          Serial.print(funFallenEdge);
//          Serial.print("\n");
        }
        Serial1.print("R");
        Serial1.print(funRisenEdge);
        Serial1.print("\n");
      }
      if (buttonStates[i][k + keyboardColumnCount/2] && !previousButtonStates[i][k + keyboardColumnCount/2]) {
        // If the current and previous state indicate a rising edge...
        risingEdgeLightControl(i);
        risingEdgeOccured = true;
        funRisenEdge = ((100 * i) + k) + 101;
        risingEdgeQueue[risingEdgeCounter] = funRisenEdge + keyboardColumnCount/2;
        risingEdgeCounter++;
        if(risingEdgeCounter >= 6){
          // If there are more than six rising edges, someone is mashing the keyboard
          risingEdgeCounter = 0;
          errorLight();
          Keyboard.releaseAll();
        }
        if(verboseFeedback){
          Serial.print("Press: ");
          Serial.print(funRisenEdge + keyboardColumnCount/2);
          Serial.print("\n");
        }
        Serial1.print("P");
        Serial1.print(funRisenEdge + keyboardColumnCount/2);
        Serial1.print("\n");
      }
      if (!buttonStates[i][k + keyboardColumnCount/2] && previousButtonStates[i][k + keyboardColumnCount/2]) {
        // If the current and previous state indicate a falling edge...
        fallingEdgeLightControl(i);
        fallingEdgeOccured = true;
        funFallenEdge = ((100 * i) + k) + 101;
        fallingEdgeQueue[fallingEdgeCounter] = funFallenEdge + keyboardColumnCount/2;
        fallingEdgeCounter++;
        if(fallingEdgeCounter >= 6){
          // If there are more than six falling edges, someone has mashed the keyboard
          fallingEdgeCounter = 0;
        }
        if(verboseFeedback){
//          Serial.print("Relse: ");
//          Serial.print(funFallenEdge + keyboardColumnCount/2);
//          Serial.print("\n");
        }
        Serial1.print("R");
        Serial1.print(funRisenEdge + keyboardColumnCount/2);
        Serial1.print("\n");
      }
      previousButtonStates[i][k] = buttonStates[i][k];
      previousButtonStates[i][k + keyboardColumnCount/2] = buttonStates[i][k + keyboardColumnCount/2];
    }
    digitalWrite(keyboardRowPins[i], HIGH);
  }
}
