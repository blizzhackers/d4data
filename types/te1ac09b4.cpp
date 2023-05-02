/**
 * Definition: te1ac09b4
 * Hash: e1ac09b4
 */

#include "te1ac09b4.h"

void te1ac09b4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&offset, base, current);
  current = ptr + 0x24;
  readData(&snoItemType, base, current);
  ptr += 0x28;
}
