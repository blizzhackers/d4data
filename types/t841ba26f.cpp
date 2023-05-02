/**
 * Definition: t841ba26f
 * Hash: 841ba26f
 */

#include "t841ba26f.h"

void t841ba26f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&pathRadius, base, current);
  current = ptr + 0x38;
  readData(&pathHeight, base, current);
  current = ptr + 0x70;
  readData(&pathBoxExtents, base, current);
  current = ptr + 0xa8;
  readData(&eType, base, current);
  current = ptr + 0xac;
  readData(&szSubObjectName, base, current);
  ptr += 0x130;
}
