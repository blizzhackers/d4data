/**
 * Definition: t5b288d96
 * Hash: 5b288d96
 */

#include "t5b288d96.h"

void t5b288d96::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ddfb7d6, base, current);
  current = ptr + 0x18;
  readData(&bEnabled, base, current);
  current = ptr + 0x20;
  readData(&unk_526a589, base, current);
  ptr += 0x28;
}
