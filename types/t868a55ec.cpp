/**
 * Definition: t868a55ec
 * Hash: 868a55ec
 */

#include "t868a55ec.h"

void t868a55ec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
