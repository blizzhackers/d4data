/**
 * Definition: t47f33ce2
 * Hash: 47f33ce2
 */

#include "t47f33ce2.h"

void t47f33ce2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x108;
  readData(&arRanks, base, current);
  ptr += 0x118;
}
