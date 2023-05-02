/**
 * Definition: td4b6d830
 * Hash: d4b6d830
 */

#include "td4b6d830.h"

void td4b6d830::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&unk_41f8768, base, current);
  ptr += 0x18;
}
