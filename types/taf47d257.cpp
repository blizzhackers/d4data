/**
 * Definition: taf47d257
 * Hash: af47d257
 */

#include "taf47d257.h"

void taf47d257::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&eDamageType, base, ptr);
  readData(&unk_9d0a7aa, base, ptr);
}
