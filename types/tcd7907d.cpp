/**
 * Definition: tcd7907d
 * Hash: cd7907d
 */

#include "tcd7907d.h"

void tcd7907d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoPower, base, ptr);
}
