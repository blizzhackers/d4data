/**
 * Definition: t38ae08f0
 * Hash: 38ae08f0
 */

#include "t38ae08f0.h"

void t38ae08f0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&ptCondition, base, current);
  ptr += 0x30;
}
