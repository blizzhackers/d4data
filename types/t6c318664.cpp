/**
 * Definition: t6c318664
 * Hash: 6c318664
 */

#include "t6c318664.h"

void t6c318664::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eSoundType, base, current);
  ptr += 0x14;
}
