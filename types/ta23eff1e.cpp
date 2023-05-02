/**
 * Definition: ta23eff1e
 * Hash: a23eff1e
 */

#include "ta23eff1e.h"

void ta23eff1e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
