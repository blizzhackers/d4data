/**
 * Definition: t841ba26f
 * Hash: 841ba26f
 */

#include "t841ba26f.h"

void t841ba26f::read(const char* base, char* &ptr) {
  readData(&pathRadius, base, ptr);
  readData(&pathHeight, base, ptr);
  readData(&pathBoxExtents, base, ptr);
  readData(&eType, base, ptr);
  readData(&szSubObjectName, base, ptr);
}
