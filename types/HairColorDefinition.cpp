/**
 * Definition: HairColorDefinition
 * Hash: e952f88c
 */

#include "HairColorDefinition.h"

void HairColorDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&nSortOrder, base, ptr);
  readData(&unk_9da2273, base, ptr);
  readData(&unk_b29fdae, base, ptr);
  readData(&unk_49f94ee, base, ptr);
}
