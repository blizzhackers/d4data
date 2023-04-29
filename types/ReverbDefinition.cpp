/**
 * Definition: ReverbDefinition
 * Hash: 933481cf
 */

#include "ReverbDefinition.h"

void ReverbDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_18b010c, base, ptr);
  readData(&unk_836cb29, base, ptr);
  readData(&unk_91c65f5, base, ptr);
  readData(&unk_3b3f006, base, ptr);
  readData(&unk_6e07592, base, ptr);
}
