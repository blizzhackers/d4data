/**
 * Definition: ta46a4aa5
 * Hash: a46a4aa5
 */

#include "ta46a4aa5.h"

void ta46a4aa5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  current = ptr + 0x1c;
  readData(&unk_8021830, base, current);
  ptr += 0x20;
}
