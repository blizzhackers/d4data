/**
 * Definition: RareItemName
 * Hash: 2b84ef7a
 */

#include "RareItemName.h"

void RareItemName::read(const char* base, char* &ptr) {
  readData(&fItemNameIsPrefix, base, ptr);
  readData(&snoAffixStringList, base, ptr);
  readData(&nAffixStringListIndex, base, ptr);
  readData(&nItemStringListIndex, base, ptr);
}
