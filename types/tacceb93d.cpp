/**
 * Definition: tacceb93d
 * Hash: acceb93d
 */

#include "tacceb93d.h"

void tacceb93d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
