/**
 * Definition: HairColorDefinition
 * Hash: e952f88c
 */

#include "HairColorDefinition.h"

void HairColorDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&nSortOrder, base, current);
  current = ptr + 0xc;
  readData(&unk_9da2273, base, current);
  current = ptr + 0x20;
  readData(&unk_b29fdae, base, current);
  current = ptr + 0x2c;
  readData(&unk_49f94ee, base, current);
  ptr += 0x30;
}
