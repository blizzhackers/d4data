/**
 * Definition: tbe0e953d
 * Hash: be0e953d
 */

#include "tbe0e953d.h"

void tbe0e953d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
