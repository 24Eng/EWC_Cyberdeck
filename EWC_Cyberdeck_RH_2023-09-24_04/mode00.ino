void pressMode00(int funPosition){
  switch (funPosition){
    case 101:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 102:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 103:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 104:
      Keyboard.press(KEY_RIGHT_ALT);
      break;
    case 105:
      // NO BUTTON
      Keyboard.releaseAll();
      break;
    case 106:
      // MENU
      Keyboard.press((char) 0xED);
      break;
    case 107:
      Keyboard.press(KEY_RIGHT_CTRL);
      break;
    case 108:
      Keyboard.releaseAll();
      break;
    case 109:
      // NUMPAD 0
      Keyboard.press((char) 0xEA);
      break;
    case 110:
      // NUMPAD 0
      Keyboard.press((char) 0xEA);
      break;
    case 111:
      // NUMPAD DOT
      Keyboard.press((char) 0xEB);
      break;
    case 112:
      // NUMPAD ENTER
      Keyboard.press((char) 0xE0);
      break;
    case 201:
      Keyboard.press('n');
      break;
    case 202:
      Keyboard.press('m');
      break;
    case 203:
      // COMMA
      Keyboard.press((char) 0x2C);
      break;
    case 204:
      // PERIOD
      Keyboard.press((char) 0x2E);
      break;
    case 205:
      // SLASH
      Keyboard.press((char) 0x2F);
      break;
    case 206:
      Keyboard.press(KEY_RIGHT_SHIFT);
    case 207:
      Keyboard.press(KEY_RIGHT_SHIFT);
      break;
    case 209:
      // NUMPAD 1
      Keyboard.press((char) 0xE1);
      break;
    case 210:
      // NUMPAD 2
      Keyboard.press((char) 0xE2);
      break;
    case 211:
      // NUMPAD 3
      Keyboard.press((char) 0xE3);
      break;
    case 212:
      // NUMPAD ENTER
      Keyboard.press((char) 0xE0);
      break;
    case 301:
      Keyboard.press('h');
      break;
    case 302:
      Keyboard.press('j');
      break;
    case 303:
      Keyboard.press('k');
      break;
    case 304:
      Keyboard.press('l');
      break;
    case 305:
      // Semicolon
      Keyboard.press((char) 0x3B);
      break;
    case 306:
      // APOSTROPHE
      Keyboard.press((char) 0x27);
      break;
    case 307:
      Keyboard.press(KEY_RETURN);
      break;
    case 308:
      Keyboard.press(KEY_RETURN);
      break;
    case 309:
      // NUMPAD 4
      Keyboard.press((char) 0xE4);
      break;
    case 310:
      // NUMPAD 5
      Keyboard.press((char) 0xE5);
      break;
    case 311:
      // NUMPAD 6
      Keyboard.press((char) 0xE6);
      break;
    case 312:
      // NUMPAD +
      Keyboard.press((char) 0xDF);
      break;
    case 401:
      Keyboard.press('y');
      break;
    case 402:
      Keyboard.press('u');
      break;
    case 403:
      Keyboard.press('i');
      break;
    case 404:
      Keyboard.press('o');
      break;
    case 405:
      Keyboard.press('p');
      break;
    case 406:
      // LEFT BRACKET [
      Keyboard.press((char) 0x5B);
      break;
    case 407:
      // RIGHT BRACKET ]
      Keyboard.press((char) 0x5D);
      break;
    case 408:
      // BACKSLASH '\'
      Keyboard.press((char) 0x5C);
      break;
    case 409:
      // NUMPAD 7
      Keyboard.press((char) 0xE7);
      break;
    case 410:
      // NUMPAD 8
      Keyboard.press((char) 0xE8);
      break;
    case 411:
      // NUMPAD 9
      Keyboard.press((char) 0xE9);
      break;
    case 412:
      // NUMPAD +
      Keyboard.press((char) 0xDF);
      break;
    case 502:
      Keyboard.press('7');
      break;
    case 503:
      Keyboard.press('8');
      break;
    case 504:
      Keyboard.press('9');
      break;
    case 505:
      Keyboard.press('0');
      break;
    case 506:
      Keyboard.press('-');
      break;
    case 507:
      Keyboard.press('=');
      break;
    case 508:
      // BACKSPACE
      Keyboard.press((char) 0xB2);
      break;
    case 509:
      // DELETE
      Keyboard.press((char) 0xD4);
      break;
    case 510:
      // NUMPAD /
      Keyboard.press((char) 0xDC);
      break;
    case 511:
      // NUMPAD *
      Keyboard.press((char) 0xDD);
      break;
    case 512:
      // NUMPAD -
      Keyboard.press((char) 0xDE);
      break;
    default:
      Serial.print(F("Mode 00 key press\n"));
      errorLight();
      Keyboard.releaseAll();
      break;
  }
}

// 2 // 4 //  // E // n // g // i // n // e // e // r   ~~~~~~~   // 2 // 4 //  // E // n // g // i // n // e // e // r 
// 2 // 4 //  // E // n // g // i // n // e // e // r   ~~~~~~~   // 2 // 4 //  // E // n // g // i // n // e // e // r 
// 2 // 4 //  // E // n // g // i // n // e // e // r   ~~~~~~~   // 2 // 4 //  // E // n // g // i // n // e // e // r 

void releaseMode00(int funPosition){
  switch (funPosition){
    case 101:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 102:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 103:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 104:
      Keyboard.release(KEY_RIGHT_ALT);
      break;
    case 105:
      // NO BUTTON
      Keyboard.releaseAll();
      break;
    case 106:
      // MENU
      Keyboard.release((char) 0xED);
      break;
    case 107:
      Keyboard.release(KEY_RIGHT_CTRL);
      break;
    case 108:
      Keyboard.releaseAll();
      break;
    case 109:
      // NUMPAD 0
      Keyboard.release((char) 0xEA);
      break;
    case 110:
      // NUMPAD 0
      Keyboard.release((char) 0xEA);
      break;
    case 111:
      // NUMPAD DOT
      Keyboard.release((char) 0xEB);
      break;
    case 112:
      // NUMPAD ENTER
      Keyboard.release((char) 0xE0);
      break;
      
    case 201:
      Keyboard.release('n');
      break;
    case 202:
      Keyboard.release('m');
      break;
    case 203:
      // COMMA
      Keyboard.release((char) 0x2C);
      break;
    case 204:
      // PERIOD
      Keyboard.release((char) 0x2E);
      break;
    case 205:
      // SLASH
      Keyboard.release((char) 0x2F);
      break;
    case 206:
      Keyboard.release(KEY_RIGHT_SHIFT);
      break;
    case 207:
      Keyboard.release(KEY_RIGHT_SHIFT);
      break;
    case 209:
      // NUMPAD 1
      Keyboard.release((char) 0xE1);
      break;
    case 210:
      // NUMPAD 2
      Keyboard.release((char) 0xE2);
      break;
    case 211:
      // NUMPAD 3
      Keyboard.release((char) 0xE3);
      break;
    case 212:
      // NUMPAD ENTER
      Keyboard.release((char) 0xE0);
      break;
      
    case 301:
      Keyboard.release('h');
      break;
    case 302:
      Keyboard.release('j');
      break;
    case 303:
      Keyboard.release('k');
      break;
    case 304:
      Keyboard.release('l');
      break;
    case 305:
      // Semicolon
      Keyboard.release((char) 0x3B);
      break;
    case 306:
      // APOSTROPHE
      Keyboard.release((char) 0x27);
      break;
    case 307:
      Keyboard.release(KEY_RETURN);
      break;
    case 308:
      Keyboard.release(KEY_RETURN);
      break;
    case 309:
      // NUMPAD 4
      Keyboard.release((char) 0xE4);
      break;
    case 310:
      // NUMPAD 5
      Keyboard.release((char) 0xE5);
      break;
    case 311:
      // NUMPAD 6
      Keyboard.release((char) 0xE6);
      break;
    case 312:
      // NUMPAD +
      Keyboard.release((char) 0xDF);
      break;
      
    case 401:
      Keyboard.release('y');
      break;
    case 402:
      Keyboard.release('u');
      break;
    case 403:
      Keyboard.release('i');
      break;
    case 404:
      Keyboard.release('o');
      break;
    case 405:
      Keyboard.release('p');
      break;
    case 406:
      // LEFT BRACKET [
      Keyboard.release((char) 0x5B);
      break;
    case 407:
      // RIGHT BRACKET ]
      Keyboard.release((char) 0x5D);
      break;
    case 408:
      // BACKSLASH '\'
      Keyboard.release((char) 0x5C);
      break;
    case 409:
      // NUMPAD 7
      Keyboard.release((char) 0xE7);
      break;
    case 410:
      // NUMPAD 8
      Keyboard.release((char) 0xE8);
      break;
    case 411:
      // NUMPAD 9
      Keyboard.release((char) 0xE9);
      break;
    case 412:
      // NUMPAD +
      Keyboard.release((char) 0xDF);
      break;
      
    case 502:
      Keyboard.release('7');
      break;
    case 503:
      Keyboard.release('8');
      break;
    case 504:
      Keyboard.release('9');
      break;
    case 505:
      Keyboard.release('0');
      break;
    case 506:
      Keyboard.release('-');
      break;
    case 507:
      Keyboard.release('=');
      break;
    case 508:
      // BACKSPACE
      Keyboard.release((char) 0xB2);
      break;
    case 509:
      // DELETE
      Keyboard.release((char) 0xD4);
      break;
    case 510:
      // NUMPAD /
      Keyboard.release((char) 0xDC);
      break;
    case 511:
      // NUMPAD *
      Keyboard.release((char) 0xDD);
      break;
    case 512:
      // NUMPAD -
      Keyboard.release((char) 0xDE);
      break;
    default:
      Keyboard.releaseAll();
      break;
  }
}
