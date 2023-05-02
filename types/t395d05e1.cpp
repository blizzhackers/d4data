/**
 * Definition: t395d05e1
 * Hash: 395d05e1
 */

#include "t395d05e1.h"

void t395d05e1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoRecipe, base, current);
  current = ptr + 0x18;
  readData(&uAmount, base, current);
  ptr += 0x20;
}
