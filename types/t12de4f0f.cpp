/**
 * Definition: t12de4f0f
 * Hash: 12de4f0f
 */

#include "t12de4f0f.h"

void t12de4f0f::read(const char* base, char* &ptr) {
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
  readData(&snoActor, base, current);
  ptr += 0x20;
}
