/**
 * Definition: te741cdb2
 * Hash: e741cdb2
 */

#include "te741cdb2.h"

void te741cdb2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&i1, base, current);
  current = ptr + 0x4;
  readData(&i2, base, current);
  current = ptr + 0x8;
  readData(&i3, base, current);
  current = ptr + 0xc;
  readData(&unk_59acc17, base, current);
  current = ptr + 0xe;
  readData(&dwGameFlags, base, current);
  current = ptr + 0x10;
  readData(&dwIncludeMask, base, current);
  ptr += 0x14;
}
