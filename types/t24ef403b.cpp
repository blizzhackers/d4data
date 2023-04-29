/**
 * Definition: t24ef403b
 * Hash: 24ef403b
 */

#include "t24ef403b.h"

void t24ef403b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoAffix, base, ptr);
}
