/**
 * Definition: tca979bb0
 * Hash: ca979bb0
 */

#include "tca979bb0.h"

void tca979bb0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
