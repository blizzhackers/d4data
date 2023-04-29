/**
 * Definition: ItemSalvageLevel
 * Hash: defe63ea
 */

#include "ItemSalvageLevel.h"

void ItemSalvageLevel::read(const char* base, char* &ptr) {
  readData(&snoSalvageTreasureClassNormal, base, ptr);
  readData(&snoSalvageTreasureClassMagic, base, ptr);
  readData(&snoSalvageTreasureClassRare, base, ptr);
  readData(&snoSalvageTreasureClassLegendary, base, ptr);
  readData(&unk_13fbf8b, base, ptr);
  readData(&unk_af5e44f, base, ptr);
}
