/**
 * Definition: t13f8b65f
 * Hash: 13f8b65f
 */

#include "t13f8b65f.h"

void t13f8b65f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
