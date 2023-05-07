/**
 * Definition: AttributeSubcondition
 * Hash: cf467c45
 */

#include "AttributeSubcondition.h"

void AttributeSubcondition::read(const char* base, char* &ptr) {
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
  readData(&eAttribute, base, current);
  current = ptr + 0x24;
  readData(&flValue, base, current);
  current = ptr + 0x28;
  readData(&nParam, base, current);
  current = ptr + 0x2c;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x30;
}
