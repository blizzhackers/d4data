/**
 * Definition: ta248a466
 * Hash: a248a466
 */

#include "ta248a466.h"

void ta248a466::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoParagonGlyphAffix, base, ptr);
}
