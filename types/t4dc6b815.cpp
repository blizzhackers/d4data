/**
 * Definition: t4dc6b815
 * Hash: 4dc6b815
 */

#include "t4dc6b815.h"

void t4dc6b815::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoPower, base, current);
  ptr += 0x20;
}
