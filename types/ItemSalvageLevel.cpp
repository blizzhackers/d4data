/**
 * Definition: ItemSalvageLevel
 * Hash: defe63ea
 */

#include "ItemSalvageLevel.h"

void ItemSalvageLevel::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoSalvageTreasureClassNormal, base, current);
  current = ptr + 0x4;
  readData(&snoSalvageTreasureClassMagic, base, current);
  current = ptr + 0x8;
  readData(&snoSalvageTreasureClassRare, base, current);
  current = ptr + 0xc;
  readData(&snoSalvageTreasureClassLegendary, base, current);
  current = ptr + 0x10;
  readData(&unk_13fbf8b, base, current);
  current = ptr + 0x14;
  readData(&unk_af5e44f, base, current);
  ptr += 0x18;
}
