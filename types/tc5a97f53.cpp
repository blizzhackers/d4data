/**
 * Definition: tc5a97f53
 * Hash: c5a97f53
 */

#include "tc5a97f53.h"

void tc5a97f53::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eGender, base, ptr);
}
