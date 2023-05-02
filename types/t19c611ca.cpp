/**
 * Definition: t19c611ca
 * Hash: 19c611ca
 */

#include "t19c611ca.h"

void t19c611ca::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_59cd8cf, base, current);
  current = ptr + 0x4;
  readData(&unk_59cd7d1, base, current);
  ptr += 0x8;
}
