/**
 * Definition: tb14ea0b3
 * Hash: b14ea0b3
 */

#include "tb14ea0b3.h"

void tb14ea0b3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_b4ca56, base, current);
  current = ptr + 0x14;
  readData(&unk_a3f2e4b, base, current);
  current = ptr + 0x18;
  readData(&unk_8c91f6f, base, current);
  current = ptr + 0x1c;
  readData(&unk_f2a9aef, base, current);
  ptr += 0x20;
}
