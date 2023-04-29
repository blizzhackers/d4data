/**
 * Definition: t12de4f0f
 * Hash: 12de4f0f
 */

#include "t12de4f0f.h"

void t12de4f0f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoActor, base, ptr);
}
