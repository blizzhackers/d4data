/**
 * Definition: t2f97701a
 * Hash: 2f97701a
 */

#include "t2f97701a.h"

void t2f97701a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
