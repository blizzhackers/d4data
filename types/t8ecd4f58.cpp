/**
 * Definition: t8ecd4f58
 * Hash: 8ecd4f58
 */

#include "t8ecd4f58.h"

void t8ecd4f58::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
