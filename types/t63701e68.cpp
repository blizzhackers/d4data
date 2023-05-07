/**
 * Definition: t63701e68
 * Hash: 63701e68
 */

#include "t63701e68.h"

void t63701e68::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&dwEntranceName, base, current);
  current = ptr + 0x14;
  readData(&dwPortalType, base, current);
  ptr += 0x18;
}
