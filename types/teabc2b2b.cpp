/**
 * Definition: teabc2b2b
 * Hash: eabc2b2b
 */

#include "teabc2b2b.h"

void teabc2b2b::read(const char* base, char* &ptr) {
  readData(&twinOffset, base, ptr);
  readData(&tail, base, ptr);
  readData(&left, base, ptr);
  readData(&next, base, ptr);
}
