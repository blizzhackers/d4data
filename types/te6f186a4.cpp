/**
 * Definition: te6f186a4
 * Hash: e6f186a4
 */

#include "te6f186a4.h"

void te6f186a4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
