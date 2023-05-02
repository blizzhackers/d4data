/**
 * Definition: t2f8b25ef
 * Hash: 2f8b25ef
 */

#include "t2f8b25ef.h"

void t2f8b25ef::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&i1, base, current);
  current = ptr + 0x4;
  readData(&i2, base, current);
  current = ptr + 0x8;
  readData(&i3, base, current);
  current = ptr + 0xc;
  readData(&w1, base, current);
  current = ptr + 0x10;
  readData(&w2, base, current);
  current = ptr + 0x14;
  readData(&w3, base, current);
  current = ptr + 0x18;
  readData(&unk_59acc17, base, current);
  current = ptr + 0x1a;
  readData(&dwGameFlags, base, current);
  current = ptr + 0x1c;
  readData(&dwIncludeMask, base, current);
  ptr += 0x20;
}
