/**
 * Definition: t69efba48
 * Hash: 69efba48
 */

#include "t69efba48.h"

void t69efba48::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
