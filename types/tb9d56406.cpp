/**
 * Definition: tb9d56406
 * Hash: b9d56406
 */

#include "tb9d56406.h"

void tb9d56406::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&flHealthPercent, base, ptr);
}
