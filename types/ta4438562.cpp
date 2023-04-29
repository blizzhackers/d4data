/**
 * Definition: ta4438562
 * Hash: a4438562
 */

#include "ta4438562.h"

void ta4438562::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
}
