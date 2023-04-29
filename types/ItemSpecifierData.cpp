/**
 * Definition: ItemSpecifierData
 * Hash: d1670183
 */

#include "ItemSpecifierData.h"

void ItemSpecifierData::read(const char* base, char* &ptr) {
  readData(&snoItemToDrop, base, ptr);
  readData(&snoAffixes, base, ptr);
  readData(&nNumAffixes, base, ptr);
  readData(&bAccountBound, base, ptr);
  readData(&unk_aab1fc1, base, ptr);
}
