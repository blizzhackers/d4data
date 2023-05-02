/**
 * Definition: td2a2c805
 * Hash: d2a2c805
 */

#include "td2a2c805.h"

void td2a2c805::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ddfb7d6, base, current);
  current = ptr + 0x18;
  readData(&bEnabled, base, current);
  ptr += 0x1c;
}
