/**
 * Definition: t6fe49d52
 * Hash: 6fe49d52
 */

#include "t6fe49d52.h"

void t6fe49d52::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoLevelArea, base, current);
  ptr += 0x20;
}
