/**
 * Definition: MaterialEnumValueDefinition
 * Hash: 2f8a81aa
 */

#include "MaterialEnumValueDefinition.h"

void MaterialEnumValueDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&vValue, base, current);
  ptr += 0x20;
}
