/**
 * Definition: BuffSubcondition
 * Hash: e041c994
 */

#include "BuffSubcondition.h"

void BuffSubcondition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoBuffPower, base, ptr);
  readData(&unk_6c4bff7, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
