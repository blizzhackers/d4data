/**
 * Definition: t59787d2
 * Hash: 59787d2
 */

#include "t59787d2.h"

void t59787d2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&bIsUnique, base, current);
  ptr += 0x108;
}
