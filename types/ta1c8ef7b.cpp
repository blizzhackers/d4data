/**
 * Definition: ta1c8ef7b
 * Hash: a1c8ef7b
 */

#include "ta1c8ef7b.h"

void ta1c8ef7b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_37dfbcb, base, current);
  current = ptr + 0x214;
  readData(&unk_729a938, base, current);
  ptr += 0x318;
}
