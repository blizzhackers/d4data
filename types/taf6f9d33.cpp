/**
 * Definition: taf6f9d33
 * Hash: af6f9d33
 */

#include "taf6f9d33.h"

void taf6f9d33::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x14;
  readData(&unk_a0febeb, base, current);
  ptr += 0x18;
}
