/**
 * Definition: t4e454f30
 * Hash: 4e454f30
 */

#include "t4e454f30.h"

void t4e454f30::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoWorld, base, current);
  ptr += 0x20;
}
