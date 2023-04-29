/**
 * Definition: tcc8c5070
 * Hash: cc8c5070
 */

#include "tcc8c5070.h"

void tcc8c5070::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
