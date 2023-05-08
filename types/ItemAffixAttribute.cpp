/**
 * Definition: ItemAffixAttribute
 * Hash: 1dea6151
 */

#include "ItemAffixAttribute.h"

void ItemAffixAttribute::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a008782, base, current);
  current = ptr + 0x4;
  readData(&unk_288eecd, base, current);
  current = ptr + 0x8;
  readData(&tAttribute, base, current);
  ptr += 0x58;
}
