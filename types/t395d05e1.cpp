/**
 * Definition: t395d05e1
 * Hash: 395d05e1
 */

#include "t395d05e1.h"

void t395d05e1::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoRecipe, base, ptr);
  readData(&uAmount, base, ptr);
}
