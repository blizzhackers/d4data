/**
 * Definition: ItemQualitySubcondition
 * Hash: b921f709
 */

#include "ItemQualitySubcondition.h"

void ItemQualitySubcondition::read(const char* base, char* &ptr) {
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
  readData(&eItemQualityLevel, base, current);
  ptr += 0x28;
}
