/**
 * Definition: ta883080
 * Hash: a883080
 */

#include "ta883080.h"

void ta883080::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoRecipe, base, ptr);
}
