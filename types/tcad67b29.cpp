/**
 * Definition: tcad67b29
 * Hash: cad67b29
 */

#include "tcad67b29.h"

void tcad67b29::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ddfb7d6, base, current);
  current = ptr + 0x18;
  readData(&unk_ff59d1d, base, current);
  ptr += 0x1c;
}
