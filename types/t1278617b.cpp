/**
 * Definition: t1278617b
 * Hash: 1278617b
 */

#include "t1278617b.h"

void t1278617b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
