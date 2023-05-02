/**
 * Definition: RareItemName
 * Hash: 2b84ef7a
 */

#include "RareItemName.h"

void RareItemName::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fItemNameIsPrefix, base, current);
  current = ptr + 0x4;
  readData(&snoAffixStringList, base, current);
  current = ptr + 0x8;
  readData(&nAffixStringListIndex, base, current);
  current = ptr + 0xc;
  readData(&nItemStringListIndex, base, current);
  ptr += 0x10;
}
