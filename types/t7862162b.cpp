/**
 * Definition: t7862162b
 * Hash: 7862162b
 */

#include "t7862162b.h"

void t7862162b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
