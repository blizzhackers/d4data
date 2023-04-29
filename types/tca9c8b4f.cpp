/**
 * Definition: tca9c8b4f
 * Hash: ca9c8b4f
 */

#include "tca9c8b4f.h"

void tca9c8b4f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
  readData(&tPhaseName, base, ptr);
}
