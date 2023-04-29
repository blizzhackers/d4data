/**
 * Definition: t5856af87
 * Hash: 5856af87
 */

#include "t5856af87.h"

void t5856af87::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
