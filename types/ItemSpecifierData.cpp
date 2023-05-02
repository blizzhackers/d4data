/**
 * Definition: ItemSpecifierData
 * Hash: d1670183
 */

#include "ItemSpecifierData.h"

void ItemSpecifierData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItemToDrop, base, current);
  current = ptr + 0x4;
  readData(&snoAffixes, base, current);
  current = ptr + 0x14;
  readData(&nNumAffixes, base, current);
  current = ptr + 0x18;
  readData(&bAccountBound, base, current);
  current = ptr + 0x1c;
  readData(&unk_aab1fc1, base, current);
  ptr += 0x24;
}
