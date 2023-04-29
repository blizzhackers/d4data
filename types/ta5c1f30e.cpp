/**
 * Definition: ta5c1f30e
 * Hash: a5c1f30e
 */

#include "ta5c1f30e.h"

void ta5c1f30e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
