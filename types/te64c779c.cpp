/**
 * Definition: te64c779c
 * Hash: e64c779c
 */

#include "te64c779c.h"

void te64c779c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x108;
  readData(&arRanges, base, current);
  ptr += 0x118;
}
