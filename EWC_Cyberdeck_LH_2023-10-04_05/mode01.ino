void pressMode01(int funPosition){
  switch (funPosition){
    case 101:
      // Escape
      Keyboard.press((char) 0xB1);
      Keyboard.releaseAll();
      break;
    case 102:
      // Escape
      Keyboard.press((char) 0xB1);
      Keyboard.releaseAll();
      break;
    case 103:
      // F1
      Keyboard.press((char) 0xC2);
      break;
    case 104:
      // F2
      Keyboard.press((char) 0xC3);
      break;
    case 105:
      // F3
      Keyboard.press((char) 0xC4);
      break;
    case 106:
      // F4
      Keyboard.press((char) 0xC5);
      break;
    case 107:
      // F5
      Keyboard.press((char) 0xC6);
      break;
    case 108:
      // F6
      Keyboard.press((char) 0xC7);
      break;
    case 201:
      Keyboard.releaseAll();
//      changeMode(0);
      break;
    case 202:
      // Tab
      Keyboard.press((char) 0xB3);
      break;
    case 204:
      Keyboard.press('q');
      break;
    case 205:
      Keyboard.press('w');
      break;
    case 206:
      Keyboard.press('e');
      break;
    case 207:
      Keyboard.press('r');
      break;
    case 208:
      Keyboard.press('t');
      break;
    case 301:
      Keyboard.releaseAll();
//      changeMode(1);
      break;
    case 302:
      Keyboard.press((char) 0xC1);
      break;
    case 304:
      Keyboard.press('a');
      break;
    case 305:
      Keyboard.press('s');
      break;
    case 306:
      Keyboard.press('d');
      break;
    case 307:
      Keyboard.press('f');
      break;
    case 308:
      Keyboard.press('g');
      break;
    case 401:
      Keyboard.releaseAll();
//      changeMode(2);
      break;
    case 402:
      Keyboard.press((char) 0x81);
      break;
    case 403:
      Keyboard.press((char) 0x81);
      break;
    case 404:
      Keyboard.press('z');
      break;
    case 405:
      Keyboard.press('x');
      break;
    case 406:
      Keyboard.press('c');
      break;
    case 407:
      Keyboard.press('v');
      break;
    case 408:
      Keyboard.press('b');
      break;
    case 501:
      Keyboard.releaseAll();
//      changeMode(3);
      break;
    case 502:
      // Left Control
      Keyboard.press((char) 0x80);
      break;
    case 503:
      // Left GUI
      Keyboard.press((char) 0x83);
      break;
    case 504:
      // Left Alt
      Keyboard.press((char) 0x82);
      break;
    case 505:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 506:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 507:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 508:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    
    // Right-hand keyboard functions
    case 1101:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 1102:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 1103:
      // SPACEBAR
      Keyboard.press((char) 0x20);
      break;
    case 1104:
      Keyboard.press(KEY_RIGHT_ALT);
      break;
    case 1105:
      // NO BUTTON
      Keyboard.releaseAll();
      break;
    case 1106:
      // MENU
      Keyboard.press((char) 0xED);
      break;
    case 1107:
      Keyboard.press(KEY_RIGHT_CTRL);
      break;
    case 1108:
      // NO BUTTON
      Keyboard.releaseAll();
      break;
    case 1109:
      // Left arrow
      Keyboard.press((char) 0xD8);
      break;
    case 1110:
      // Down arrow
      Keyboard.press((char) 0xD9);
      break;
    case 1111:
      // Right arrow
      Keyboard.press((char) 0xD7);
      break;
    case 1112:
      // NUMPAD ENTER
      Keyboard.press((char) 0xE0);
      break;
    case 1201:
      Keyboard.press('n');
      break;
    case 1202:
      Keyboard.press('m');
      break;
    case 1203:
      // COMMA
      Keyboard.press((char) 0x2C);
      break;
    case 1204:
      // PERIOD
      Keyboard.press((char) 0x2E);
      break;
    case 1205:
      // SLASH
      Keyboard.press((char) 0x2F);
      break;
    case 1206:
      Keyboard.press(KEY_RIGHT_SHIFT);
    case 1207:
      Keyboard.press(KEY_RIGHT_SHIFT);
      break;
    case 1209:
      Keyboard.releaseAll();
      break;
    case 1210:
      // Up arrow
      Keyboard.press((char) 0xDA);
      break;
    case 1211:
      Keyboard.releaseAll();
      break;
    case 1212:
      // NUMPAD ENTER
      Keyboard.press((char) 0xE0);
      break;
    case 1301:
      Keyboard.press('h');
      break;
    case 1302:
      Keyboard.press('j');
      break;
    case 1303:
      Keyboard.press('k');
      break;
    case 1304:
      Keyboard.press('l');
      break;
    case 1305:
      // Semicolon
      Keyboard.press((char) 0x3B);
      break;
    case 1306:
      // APOSTROPHE
      Keyboard.press((char) 0x27);
      break;
    case 1307:
      Keyboard.press(KEY_RETURN);
      break;
    case 1308:
      Keyboard.press(KEY_RETURN);
      break;
    case 1309:
      // Delete
      Keyboard.press((char) 0xD4);
      break;
    case 1310:
      // End
      Keyboard.press((char) 0xD5);
      break;
    case 1311:
      // Page down
      Keyboard.press((char) 0xD6);
      break;
    case 1312:
      // NUMPAD +
      Keyboard.press((char) 0xDF);
      break;
    case 1401:
      Keyboard.press('y');
      break;
    case 1402:
      Keyboard.press('u');
      break;
    case 1403:
      Keyboard.press('i');
      break;
    case 1404:
      Keyboard.press('o');
      break;
    case 1405:
      Keyboard.press('p');
      break;
    case 1406:
      // LEFT BRACKET [
      Keyboard.press((char) 0x5B);
      break;
    case 1407:
      // RIGHT BRACKET ]
      Keyboard.press((char) 0x5D);
      break;
    case 1408:
      // BACKSLASH '\'
      Keyboard.press((char) 0x5C);
      break;
    case 1409:
      // Insert
      Keyboard.press((char) 0xD1);
      break;
    case 1410:
      // Home
      Keyboard.press((char) 0xD2);
      break;
    case 1411:
      // Page up
      Keyboard.press((char) 0xD3);
      break;
    case 1412:
      // NUMPAD +
      Keyboard.press((char) 0xDF);
      break;
    case 1502:
      // F7
      Keyboard.press((char) 0xC8);
      break;
    case 1503:
      // F8
      Keyboard.press((char) 0xC9);
      break;
    case 1504:
      // F9
      Keyboard.press((char) 0xCA);
      break;
    case 1505:
      // F10
      Keyboard.press((char) 0xCB);
      break;
    case 1506:
      // F11
      Keyboard.press((char) 0xCC);
      break;
    case 1507:
      // F12
      Keyboard.press((char) 0xCD);
      break;
    case 1508:
      // BACKSPACE
      Keyboard.press((char) 0xB2);
      break;
    case 1509:
      // DELETE
      Keyboard.press((char) 0xD4);
      break;
    case 1510:
      // NUMPAD /
      Keyboard.press((char) 0xDC);
      break;
    case 1511:
      // NUMPAD *
      Keyboard.press((char) 0xDD);
      break;
    case 1512:
      // NUMPAD -
      Keyboard.press((char) 0xDE);
      break;

    default:
      Serial.print(F("Mode 00 key press\t"));
      Serial.print(funPosition);
      Serial.print("\n");
      errorLight();
      Keyboard.releaseAll();
      break;
  }
}

// 2 // 4 //  // E // n // g // i // n // e // e // r   ~~~~~~~   // 2 // 4 //  // E // n // g // i // n // e // e // r 
// 2 // 4 //  // E // n // g // i // n // e // e // r   ~~~~~~~   // 2 // 4 //  // E // n // g // i // n // e // e // r 
// 2 // 4 //  // E // n // g // i // n // e // e // r   ~~~~~~~   // 2 // 4 //  // E // n // g // i // n // e // e // r 

void releaseMode01(int funPosition){
  switch (funPosition){
    case 101:
      // Escape
      Keyboard.release((char) 0xB1);
      Keyboard.releaseAll();
      break;
    case 102:
      // Escape
      Keyboard.release((char) 0xB1);
      Keyboard.releaseAll();
      break;
    case 103:
      // F1
      Keyboard.release((char) 0xC2);
      break;
    case 104:
      // F2
      Keyboard.release((char) 0xC3);
      break;
    case 105:
      // F3
      Keyboard.release((char) 0xC4);
      break;
    case 106:
      // F4
      Keyboard.release((char) 0xC5);
      break;
    case 107:
      // F5
      Keyboard.release((char) 0xC6);
      break;
    case 108:
      // F6
      Keyboard.release((char) 0xC7);
      break;
    case 201:
      changeMode(0);
      break;
    case 202:
      // Tab
      Keyboard.release((char) 0xB3);
      break;
    case 204:
      Keyboard.release('q');
      break;
    case 205:
      Keyboard.release('w');
      break;
    case 206:
      Keyboard.release('e');
      break;
    case 207:
      Keyboard.release('r');
      break;
    case 208:
      Keyboard.release('t');
      break;
    case 301:
      changeMode(1);
      break;
    case 302:
      Keyboard.release((char) 0xC1);
      break;
    case 304:
      Keyboard.release('a');
      break;
    case 305:
      Keyboard.release('s');
      break;
    case 306:
      Keyboard.release('d');
      break;
    case 307:
      Keyboard.release('f');
      break;
    case 308:
      Keyboard.release('g');
      break;
    case 401:
      changeMode(2);
      break;
    case 402:
      Keyboard.release((char) 0x81);
      break;
    case 403:
      Keyboard.release((char) 0x81);
      break;
    case 404:
      Keyboard.release('z');
      break;
    case 405:
      Keyboard.release('x');
      break;
    case 406:
      Keyboard.release('c');
      break;
    case 407:
      Keyboard.release('v');
      break;
    case 408:
      Keyboard.release('b');
      break;
    case 501:
      changeMode(3);
      break;
    case 502:
      // Left Control
      Keyboard.release((char) 0x80);
      break;
    case 503:
      // Left GUI
      Keyboard.release((char) 0x83);
      break;
    case 504:
      // Left Alt
      Keyboard.release((char) 0x82);
      break;
    case 505:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 506:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 507:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 508:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    
    // Right-hand keyboard functions
    case 1101:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 1102:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 1103:
      // SPACEBAR
      Keyboard.release((char) 0x20);
      break;
    case 1104:
      Keyboard.release(KEY_RIGHT_ALT);
      break;
    case 1105:
      // NO BUTTON
      Keyboard.releaseAll();
      break;
    case 1106:
      // MENU
      Keyboard.release((char) 0xED);
      break;
    case 1107:
      Keyboard.release(KEY_RIGHT_CTRL);
      break;
    case 1108:
      // NO BUTTON
      Keyboard.releaseAll();
      break;
    case 1109:
      // Left arrow
      Keyboard.release((char) 0xD8);
      break;
    case 1110:
      // Down arrow
      Keyboard.release((char) 0xD9);
      break;
    case 1111:
      // Right arrow
      Keyboard.release((char) 0xD7);
      break;
    case 1112:
      // NUMPAD ENTER
      Keyboard.release((char) 0xE0);
      break;
    case 1201:
      Keyboard.release('n');
      break;
    case 1202:
      Keyboard.release('m');
      break;
    case 1203:
      // COMMA
      Keyboard.release((char) 0x2C);
      break;
    case 1204:
      // PERIOD
      Keyboard.release((char) 0x2E);
      break;
    case 1205:
      // SLASH
      Keyboard.release((char) 0x2F);
      break;
    case 1206:
      Keyboard.release(KEY_RIGHT_SHIFT);
    case 1207:
      Keyboard.release(KEY_RIGHT_SHIFT);
      break;
    case 1209:
      Keyboard.releaseAll();
      break;
    case 1210:
      // Up arrow
      Keyboard.release((char) 0xDA);
      break;
    case 1211:
      Keyboard.releaseAll();
      break;
    case 1212:
      // NUMPAD ENTER
      Keyboard.release((char) 0xE0);
      break;
    case 1301:
      Keyboard.release('h');
      break;
    case 1302:
      Keyboard.release('j');
      break;
    case 1303:
      Keyboard.release('k');
      break;
    case 1304:
      Keyboard.release('l');
      break;
    case 1305:
      // Semicolon
      Keyboard.release((char) 0x3B);
      break;
    case 1306:
      // APOSTROPHE
      Keyboard.release((char) 0x27);
      break;
    case 1307:
      Keyboard.release(KEY_RETURN);
      break;
    case 1308:
      Keyboard.release(KEY_RETURN);
      break;
    case 1309:
      // Delete
      Keyboard.release((char) 0xD4);
      break;
    case 1310:
      // End
      Keyboard.release((char) 0xD5);
      break;
    case 1311:
      // Page down
      Keyboard.release((char) 0xD6);
      break;
    case 1312:
      // NUMPAD +
      Keyboard.release((char) 0xDF);
      break;
    case 1401:
      Keyboard.release('y');
      break;
    case 1402:
      Keyboard.release('u');
      break;
    case 1403:
      Keyboard.release('i');
      break;
    case 1404:
      Keyboard.release('o');
      break;
    case 1405:
      Keyboard.release('p');
      break;
    case 1406:
      // LEFT BRACKET [
      Keyboard.release((char) 0x5B);
      break;
    case 1407:
      // RIGHT BRACKET ]
      Keyboard.release((char) 0x5D);
      break;
    case 1408:
      // BACKSLASH '\'
      Keyboard.release((char) 0x5C);
      break;
    case 1409:
      // Insert
      Keyboard.release((char) 0xD1);
      break;
    case 1410:
      // Home
      Keyboard.release((char) 0xD2);
      break;
    case 1411:
      // Page up
      Keyboard.release((char) 0xD3);
      break;
    case 1412:
      // NUMPAD +
      Keyboard.release((char) 0xDF);
      break;
    case 1502:
      // F7
      Keyboard.release((char) 0xC8);
      break;
    case 1503:
      // F8
      Keyboard.release((char) 0xC9);
      break;
    case 1504:
      // F9
      Keyboard.release((char) 0xCA);
      break;
    case 1505:
      // F10
      Keyboard.release((char) 0xCB);
      break;
    case 1506:
      // F11
      Keyboard.release((char) 0xCC);
      break;
    case 1507:
      // F12
      Keyboard.release((char) 0xCD);
      break;
    case 1508:
      // BACKSPACE
      Keyboard.release((char) 0xB2);
      break;
    case 1509:
      // DELETE
      Keyboard.release((char) 0xD4);
      break;
    case 1510:
      // NUMPAD /
      Keyboard.release((char) 0xDC);
      break;
    case 1511:
      // NUMPAD *
      Keyboard.release((char) 0xDD);
      break;
    case 1512:
      // NUMPAD -
      Keyboard.release((char) 0xDE);
      break;

    default:
      Keyboard.releaseAll();
      break;
  }
}
