/**
 * Definition: t9a12ec57
 * Hash: 9a12ec57
 */

#include "t9a12ec57.h"

void t9a12ec57::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
