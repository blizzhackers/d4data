/**
 * Definition: t699bf885
 * Hash: 699bf885
 */

#include "t699bf885.h"

void t699bf885::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
