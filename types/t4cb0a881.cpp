/**
 * Definition: t4cb0a881
 * Hash: 4cb0a881
 */

#include "t4cb0a881.h"

void t4cb0a881::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  ptr += 0x20;
}
