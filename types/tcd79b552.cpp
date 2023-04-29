/**
 * Definition: tcd79b552
 * Hash: cd79b552
 */

#include "tcd79b552.h"

void tcd79b552::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwNodeIndex, base, ptr);
}
