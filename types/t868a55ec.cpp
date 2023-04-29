/**
 * Definition: t868a55ec
 * Hash: 868a55ec
 */

#include "t868a55ec.h"

void t868a55ec::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
