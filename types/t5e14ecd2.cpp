/**
 * Definition: t5e14ecd2
 * Hash: 5e14ecd2
 */

#include "t5e14ecd2.h"

void t5e14ecd2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoItemType, base, current);
  ptr += 0x14;
}
