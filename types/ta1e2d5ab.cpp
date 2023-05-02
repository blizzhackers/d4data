/**
 * Definition: ta1e2d5ab
 * Hash: a1e2d5ab
 */

#include "ta1e2d5ab.h"

void ta1e2d5ab::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_7037c81, base, current);
  current = ptr + 0x14;
  readData(&unk_24d0615, base, current);
  current = ptr + 0x28;
  readData(&unk_8a8ab92, base, current);
  current = ptr + 0x2c;
  readData(&nXPTier, base, current);
  ptr += 0x30;
}
