/**
 * Definition: t965d4e57
 * Hash: 965d4e57
 */

#include "t965d4e57.h"

void t965d4e57::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eSlot, base, current);
  current = ptr + 0x14;
  readData(&bEnable, base, current);
  ptr += 0x18;
}
