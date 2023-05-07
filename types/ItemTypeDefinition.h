/**
 * Definition: ItemTypeDefinition
 * Hash: 87805f1a
 */

#pragma once

#include "../types.h"
#include "ta5df0191.h"

#pragma push(pack, 1)

struct ItemTypeDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> unk_32a72a6;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> arBodySlots;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> arItemLabels;
  DT_ENUM<DT_INT> eWeaponClass;
  DT_ENUM<DT_INT> unk_18ee4ac;
  DT_FLOAT unk_b2500f1;
  DT_FLOAT unk_4811bbe;
  DT_FLOAT unk_cc5ef53;
  DT_INT unk_9981e08;
  DT_INT unk_9e2e500;
  DT_INT unk_69d0449;
  DT_INT unk_f03343a;
  DT_INT unk_9d54616;
  DT_INT unk_b5a1c2b;
  DT_FIXEDARRAY<DT_UINT, 2> dwItemLabelMask;
  DT_VARIABLEARRAY<ta5df0191> unk_60c6aca;
  DT_SNO<SnoGroup::Particle> unk_4ec8d93;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
