/**
 * Definition: t7ba7c20f
 * Hash: 7ba7c20f
 */

#include "t7ba7c20f.h"

void t7ba7c20f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&snoSubzone, base, current);
  current = ptr + 0x14;
  readData(&snoLevelArea, base, current);
  ptr += 0x18;
}
