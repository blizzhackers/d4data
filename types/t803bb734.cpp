/**
 * Definition: t803bb734
 * Hash: 803bb734
 */

#include "t803bb734.h"

void t803bb734::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&uProfileAwardId, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
