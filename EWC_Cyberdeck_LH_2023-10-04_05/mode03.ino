void releaseMode03(int funPosition){
  switch (funPosition){
    case 101:
      // Escape
      Keyboard.release((char) 0xB1);
      Keyboard.releaseAll();
      break;
    case 201:
      changeMode(0);
      break;
    case 301:
      changeMode(1);
      break;
    case 401:
      changeMode(2);
      break;
    case 501:
      changeMode(3);
      break;
    default:
      if(funPosition < 200){
        colorWheel(0, random(0, 767));
        break;
      }
      if(funPosition < 300){
        colorWheel(1, random(0, 767));
        break;
      }
      if(funPosition < 400){
        colorWheel(2, random(0, 767));
        break;
      }
      if(funPosition < 500){
        colorWheel(3, random(0, 767));
        break;
      }
      if(funPosition < 600){
        colorWheel(4, random(0, 767));
        break;
      }
      break;
  }
}
