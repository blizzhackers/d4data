/**
 * Definition: tda10e464
 * Hash: da10e464
 */

#include "tda10e464.h"

void tda10e464::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
