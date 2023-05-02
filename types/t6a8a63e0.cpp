/**
 * Definition: t6a8a63e0
 * Hash: 6a8a63e0
 */

#include "t6a8a63e0.h"

void t6a8a63e0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_1b85e9d, base, current);
  current = ptr + 0x4;
  readData(&tSettings, base, current);
  ptr += 0x84;
}
