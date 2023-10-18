/*  
    Teclado Gamer rápido
    por: Mario de Making Robotics Colombia
    se usa: arduino LEONARDO + Shield Joystick keyes (trae una sección para prototipado)
    https://www.youtube.com/MakingRoboticsColombia
*/

#include "Keyboard.h" // incluye libreria Keyboard

void setup() {
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);

  pinMode(13,OUTPUT);
  Keyboard.begin();          //
}

void loop() {
  if (digitalRead(6) == LOW) {
    // Keyboard.press('a');//
     Keyboard.press('w');//lol    
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

 if (digitalRead(7) == LOW) {
    // Keyboard.press('a');//
     Keyboard.press('a');//lol    
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

  if (digitalRead(8) == LOW) {
     //Keyboard.press('s');//   
      Keyboard.press('s');//lol   
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

  if (digitalRead(9) == LOW) {
     //Keyboard.press('w');//   
      Keyboard.press('d');//lol   
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

  if (digitalRead(10) == LOW) {
     //Keyboard.press('d');//   
      Keyboard.press('k');//lol   
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

   if (digitalRead(11) == LOW) {
    // Keyboard.press(' ');//dinosaurio chrome   
     Keyboard.press('l');//lol
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

   if (digitalRead(12) == LOW) {
    // Keyboard.press(' ');//dinosaurio chrome   
     Keyboard.press('Enter');//lol
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

}
