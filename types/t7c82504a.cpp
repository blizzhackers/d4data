/**
 * Definition: t7c82504a
 * Hash: 7c82504a
 */

#include "t7c82504a.h"

void t7c82504a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoItemType, base, ptr);
  readData(&unk_882d30e, base, ptr);
}
