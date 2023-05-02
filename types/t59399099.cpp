/**
 * Definition: t59399099
 * Hash: 59399099
 */

#include "t59399099.h"

void t59399099::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoGlyph, base, current);
  current = ptr + 0x14;
  readData(&unk_6499985, base, current);
  ptr += 0x18;
}
