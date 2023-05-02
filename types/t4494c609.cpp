/**
 * Definition: t4494c609
 * Hash: 4494c609
 */

#include "t4494c609.h"

void t4494c609::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoWorld, base, current);
  ptr += 0x20;
}
