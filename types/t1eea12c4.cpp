/**
 * Definition: t1eea12c4
 * Hash: 1eea12c4
 */

#include "t1eea12c4.h"

void t1eea12c4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ddfb7d6, base, current);
  current = ptr + 0x18;
  readData(&bEnabled, base, current);
  ptr += 0x1c;
}
