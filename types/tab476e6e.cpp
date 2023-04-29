/**
 * Definition: tab476e6e
 * Hash: ab476e6e
 */

#include "tab476e6e.h"

void tab476e6e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
