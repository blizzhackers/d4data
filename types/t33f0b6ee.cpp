/**
 * Definition: t33f0b6ee
 * Hash: 33f0b6ee
 */

#include "t33f0b6ee.h"

void t33f0b6ee::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&unk_1833d57, base, current);
  current = ptr + 0x24;
  readData(&flSecs, base, current);
  ptr += 0x28;
}
