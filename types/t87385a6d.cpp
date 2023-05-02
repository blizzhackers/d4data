/**
 * Definition: t87385a6d
 * Hash: 87385a6d
 */

#include "t87385a6d.h"

void t87385a6d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szTarget, base, current);
  current = ptr + 0x10;
  readData(&unk_897d99b, base, current);
  ptr += 0x28;
}
