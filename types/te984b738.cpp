/**
 * Definition: te984b738
 * Hash: e984b738
 */

#include "te984b738.h"

void te984b738::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&eResourceType, base, ptr);
  readData(&flAmount, base, ptr);
}
