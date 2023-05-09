/**
 * Definition: WorldTierSubcondition
 * Hash: 31f3fbed
 */

#include "WorldTierSubcondition.h"

void WorldTierSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&unk_99e9721, base, current);
  ptr += 0x28;
}
