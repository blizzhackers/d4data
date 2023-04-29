/**
 * Definition: tdf741cd1
 * Hash: df741cd1
 */

#include "tdf741cd1.h"

void tdf741cd1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
