void pressMode02(int funPosition){
  switch (funPosition){
    case 101:
      // Escape
      Keyboard.write((char) 0xB1);
      Keyboard.releaseAll();
      break;
    case 102:
      // Tilde
      Keyboard.write((char) 0x60);
      break;
    case 103:
      Keyboard.write('1');
      break;
    case 104:
      Keyboard.write('2');
      break;
    case 105:
      Keyboard.write('3');
      break;
    case 106:
      Keyboard.write('4');
      break;
    case 107:
      Keyboard.write('5');
      break;
    case 108:
      Keyboard.write('6');
      break;
    case 201:
      Keyboard.releaseAll();
//      changeMode(0);
      break;
    case 202:
      // Tab
      Keyboard.write((char) 0xB3);
      break;
    case 204:
      Keyboard.write('q');
      break;
    case 205:
      Keyboard.write('w');
      break;
    case 206:
      Keyboard.write('e');
      break;
    case 207:
      Keyboard.write('r');
      break;
    case 208:
      Keyboard.write('t');
      break;
    case 301:
      Keyboard.releaseAll();
//      changeMode(1);
      break;
    case 302:
      Keyboard.write((char) 0xC1);
      break;
    case 304:
      Keyboard.write('a');
      break;
    case 305:
      Keyboard.write('s');
      break;
    case 306:
      Keyboard.write('d');
      break;
    case 307:
      Keyboard.write('f');
      break;
    case 308:
      Keyboard.write('g');
      break;
    case 401:
      Keyboard.releaseAll();
//      changeMode(2);
      break;
    case 402:
      Keyboard.write((char) 0x81);
      break;
    case 403:
      Keyboard.write((char) 0x81);
      break;
    case 404:
      Keyboard.write('z');
      break;
    case 405:
      Keyboard.write('x');
      break;
    case 406:
      Keyboard.write('c');
      break;
    case 407:
      Keyboard.write('v');
      break;
    case 408:
      Keyboard.write('b');
      break;
    case 501:
      Keyboard.releaseAll();
//      changeMode(3);
      break;
    case 502:
      // Left Control
      Keyboard.write((char) 0x80);
      break;
    case 503:
      // Left GUI
      Keyboard.write((char) 0x83);
      break;
    case 504:
      // Left Alt
      Keyboard.write((char) 0x82);
      break;
    case 505:
      // SPACEBAR
      Keyboard.write((char) 0x20);
      break;
    case 506:
      // SPACEBAR
      Keyboard.write((char) 0x20);
      break;
    case 507:
      // SPACEBAR
      Keyboard.write((char) 0x20);
      break;
    case 508:
      // SPACEBAR
      Keyboard.write((char) 0x20);
      break;
    // Right-hand keyboard functions
    case 1101:
      // SPACEBAR
      Keyboard.write((char) 0x20);
      break;
    case 1102:
      // SPACEBAR
      Keyboard.write((char) 0x20);
      break;
    case 1103:
      // SPACEBAR
      Keyboard.write((char) 0x20);
      break;
    case 1104:
      Keyboard.write(KEY_RIGHT_ALT);
      break;
    case 1105:
      // NO BUTTON
      Keyboard.releaseAll();
      break;
    case 1106:
      // MENU
      Keyboard.write((char) 0xED);
      break;
    case 1107:
      Keyboard.write(KEY_RIGHT_CTRL);
      break;
    case 1108:
      // NO BUTTON
      Keyboard.releaseAll();
      break;
    case 1109:
      // Numpad 0
      Keyboard.write((char) 0xEA);
      break;
    case 1110:
      // Numpad 0
      Keyboard.write((char) 0xEA);
      break;
    case 1111:
      // Numpad decimal
      Keyboard.write((char) 0xEB);
      break;
    case 1112:
      // NUMPAD ENTER
      Keyboard.write((char) 0xE0);
      break;
    case 1201:
      Keyboard.write('n');
      break;
    case 1202:
      Keyboard.write('m');
      break;
    case 1203:
      // COMMA
      Keyboard.write((char) 0x2C);
      break;
    case 1204:
      // PERIOD
      Keyboard.write((char) 0x2E);
      break;
    case 1205:
      // SLASH
      Keyboard.write((char) 0x2F);
      break;
    case 1206:
      Keyboard.write(KEY_RIGHT_SHIFT);
    case 1207:
      Keyboard.write(KEY_RIGHT_SHIFT);
      break;
    case 1209:
      // NUMPAD 1
      Keyboard.write((char) 0xE1);
      break;
    case 1210:
      // Numpad 2
      Keyboard.write((char) 0xE2);
      break;
    case 1211:
      // NUMPAD 3
      Keyboard.write((char) 0xE3);
      break;
    case 1212:
      // NUMPAD ENTER
      Keyboard.write((char) 0xE0);
      break;
    case 1301:
      Keyboard.write('h');
      break;
    case 1302:
      Keyboard.write('j');
      break;
    case 1303:
      Keyboard.write('k');
      break;
    case 1304:
      Keyboard.write('l');
      break;
    case 1305:
      // Semicolon
      Keyboard.write((char) 0x3B);
      break;
    case 1306:
      // APOSTROPHE
      Keyboard.write((char) 0x27);
      break;
    case 1307:
      Keyboard.write(KEY_RETURN);
      break;
    case 1308:
      Keyboard.write(KEY_RETURN);
      break;
    case 1309:
      // NUMPAD 4
      Keyboard.write((char) 0xE4);
      break;
    case 1310:
      // NUMPAD 5
      Keyboard.write((char) 0xE5);
      break;
    case 1311:
      // NUMPAD 6
      Keyboard.write((char) 0xE6);
      break;
    case 1312:
      // NUMPAD +
      Keyboard.write((char) 0xDF);
      break;
    case 1401:
      Keyboard.write('y');
      break;
    case 1402:
      Keyboard.write('u');
      break;
    case 1403:
      Keyboard.write('i');
      break;
    case 1404:
      Keyboard.write('o');
      break;
    case 1405:
      Keyboard.write('p');
      break;
    case 1406:
      // LEFT BRACKET [
      Keyboard.write((char) 0x5B);
      break;
    case 1407:
      // RIGHT BRACKET ]
      Keyboard.write((char) 0x5D);
      break;
    case 1408:
      // BACKSLASH '\'
      Keyboard.write((char) 0x5C);
      break;
    case 1409:
      // NUMPAD 7
      Keyboard.write((char) 0xE7);
      break;
    case 1410:
      // NUMPAD 8
      Keyboard.write((char) 0xE8);
      break;
    case 1411:
      // NUMPAD 9
      Keyboard.write((char) 0xE9);
      break;
    case 1412:
      // NUMPAD +
      Keyboard.write((char) 0xDF);
      break;
    case 1502:
      Keyboard.write('7');
      break;
    case 1503:
      Keyboard.write('8');
      break;
    case 1504:
      Keyboard.write('9');
      break;
    case 1505:
      Keyboard.write('0');
      break;
    case 1506:
      Keyboard.write('-');
      break;
    case 1507:
      Keyboard.write('=');
      break;
    case 1508:
      // BACKSPACE
      Keyboard.write((char) 0xB2);
      break;
    case 1509:
      // DELETE
      Keyboard.write((char) 0xD4);
      break;
    case 1510:
      // NUMPAD /
      Keyboard.write((char) 0xDC);
      break;
    case 1511:
      // NUMPAD *
      Keyboard.write((char) 0xDD);
      break;
    case 1512:
      // NUMPAD -
      Keyboard.write((char) 0xDE);
      break;

    default:
      Serial.print(F("Mode 00 key write\t"));
      Serial.print(funPosition);
      Serial.print("\n");
      errorLight();
      Keyboard.releaseAll();
      break;
  }
}

void releaseMode02(int funPosition){
  Keyboard.releaseAll();
}
