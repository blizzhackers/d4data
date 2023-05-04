/**
 * Definition: tb5002e1
 * Hash: b5002e1
 */

#include "tb5002e1.h"

void tb5002e1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&gbidSpawnLocType, base, current);
  current = ptr + 0x4;
  readData(&unk_7a5b3f7, base, current);
  ptr += 0x8;
}
