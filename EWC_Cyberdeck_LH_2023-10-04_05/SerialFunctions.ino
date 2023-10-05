bool serialActivity(){
  bool funActivity = false;
  while (Serial1.available()) {
    byte funSerialByte = Serial1.read();
    incomingAddress[serialCounter] = funSerialByte;
    serialCounter++;
    if(funSerialByte == 10 || funSerialByte == 13){
      funActivity = true;
      serialCounter = 0;
    }
  }
  return funActivity;
}

void processSerial(){
  for(int i=0; i<4;i++){
    if(verboseFeedback){
      Serial.write(incomingAddress[i]);
    }
    int funAddyInteger = incomingAddress[i] - 0x30;
    if(i>0){
      serialAddressPress = serialAddressPress + (pow(10, (3-i)) * funAddyInteger);
      serialAddressRelease = serialAddressRelease + (pow(10, (3-i)) * funAddyInteger);
    }
  }
  if(verboseFeedback){
    Serial.print("\n");
  }
  if(incomingAddress[0] == 'P'){
    serialAddressPress++;
    
    risingEdgeQueue[risingEdgeCounter] = (1000 + serialAddressPress);
    risingEdgeCounter++;
    if(risingEdgeCounter >= 6){
      // If there are more than six rising edges, someone is mashing the keyboard
      risingEdgeCounter = 0;
      errorLight();
      Keyboard.releaseAll();
    }
    actOnRisingEdges();
  }
  if(incomingAddress[0] == 'R'){
    serialAddressRelease++;
    fallingEdgeQueue[fallingEdgeCounter] = (1000 + serialAddressRelease);
    fallingEdgeCounter++;
    if(fallingEdgeCounter >= 6){
      // If there are more than six falling edges, someone has mashed the keyboard
      fallingEdgeCounter = 0;
    }
    actOnFallingEdges();
  }
  serialAddressPress = 0;
  serialAddressRelease = 0;
}
