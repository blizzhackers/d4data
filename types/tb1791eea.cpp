/**
 * Definition: tb1791eea
 * Hash: b1791eea
 */

#include "tb1791eea.h"

void tb1791eea::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tSNONames, base, current);
  ptr += 0x8;
}
