/**
 * Definition: BuffSubcondition
 * Hash: e041c994
 */

#include "BuffSubcondition.h"

void BuffSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoBuffPower, base, current);
  current = ptr + 0x1c;
  readData(&unk_6c4bff7, base, current);
  current = ptr + 0x20;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x28;
}
