/**
 * Definition: t6c5b85fd
 * Hash: 6c5b85fd
 */

#include "t6c5b85fd.h"

void t6c5b85fd::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwNodeIndex, base, ptr);
}
