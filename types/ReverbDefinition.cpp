/**
 * Definition: ReverbDefinition
 * Hash: 933481cf
 */

#include "ReverbDefinition.h"

void ReverbDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_18b010c, base, current);
  current = ptr + 0xc;
  readData(&unk_836cb29, base, current);
  current = ptr + 0x10;
  readData(&ptStateValues, base, current);
  current = ptr + 0x20;
  readData(&unk_3b3f006, base, current);
  current = ptr + 0x30;
  readData(&unk_6e07592, base, current);
  ptr += 0x40;
}
