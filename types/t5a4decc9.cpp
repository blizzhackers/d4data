/**
 * Definition: t5a4decc9
 * Hash: 5a4decc9
 */

#include "t5a4decc9.h"

void t5a4decc9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
