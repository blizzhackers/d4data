/**
 * Definition: td044f267
 * Hash: d044f267
 */

#include "td044f267.h"

void td044f267::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  ptr += 0x30;
}
