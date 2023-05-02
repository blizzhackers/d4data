/**
 * Definition: t97f642a2
 * Hash: 97f642a2
 */

#include "t97f642a2.h"

void t97f642a2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&uProfileAwardId, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
