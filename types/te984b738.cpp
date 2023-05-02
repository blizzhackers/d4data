/**
 * Definition: te984b738
 * Hash: e984b738
 */

#include "te984b738.h"

void te984b738::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  current = ptr + 0x1c;
  readData(&eResourceType, base, current);
  current = ptr + 0x20;
  readData(&flAmount, base, current);
  ptr += 0x28;
}
