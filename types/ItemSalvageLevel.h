/**
 * Definition: ItemSalvageLevel
 * Hash: defe63ea
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ItemSalvageLevel : public ComplexRead {
  DT_SNO<SnoGroup::TreasureClass> snoSalvageTreasureClassNormal;
  DT_SNO<SnoGroup::TreasureClass> snoSalvageTreasureClassMagic;
  DT_SNO<SnoGroup::TreasureClass> snoSalvageTreasureClassRare;
  DT_SNO<SnoGroup::TreasureClass> snoSalvageTreasureClassLegendary;
  DT_SNO<SnoGroup::TreasureClass> unk_13fbf8b;
  DT_SNO<SnoGroup::TreasureClass> unk_af5e44f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
