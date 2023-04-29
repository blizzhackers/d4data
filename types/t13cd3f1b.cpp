/**
 * Definition: t13cd3f1b
 * Hash: 13cd3f1b
 */

#include "t13cd3f1b.h"

void t13cd3f1b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
