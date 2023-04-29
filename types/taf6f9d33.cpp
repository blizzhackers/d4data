/**
 * Definition: taf6f9d33
 * Hash: af6f9d33
 */

#include "taf6f9d33.h"

void taf6f9d33::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
