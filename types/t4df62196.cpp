/**
 * Definition: t4df62196
 * Hash: 4df62196
 */

#include "t4df62196.h"

void t4df62196::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoScene, base, current);
  ptr += 0x20;
}
