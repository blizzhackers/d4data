/**
 * Definition: NPCComponentSetDefinition
 * Hash: 59359749
 */

#pragma once

#include "../types.h"
#include "t1109bb04.h"
#include "t1b652647.h"
#include "t1f34a5e5.h"
#include "t7bd3842a.h"
#include "t993e31cf.h"
#include "t9b106a7f.h"

#pragma push(pack, 1)

struct NPCComponentSetDefinition : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Appearance>> arAppearances;
  DT_VARIABLEARRAY<DT_INT> arSkinColors;
  DT_VARIABLEARRAY<DT_INT> arHairColors;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Dye>> arEquipmentDyes;
  DT_VARIABLEARRAY<t1b652647> unk_e8ad810;
  DT_VARIABLEARRAY<t993e31cf> unk_be478b4;
  DT_FIXEDARRAY<DT_VARIABLEARRAY, 4> unk_7cdd390;
  DT_FIXEDARRAY<DT_VARIABLEARRAY, 4> unk_8bee334;
  DT_VARIABLEARRAY<t9b106a7f> unk_2e94cee;
  DT_VARIABLEARRAY<t1109bb04> unk_395e53;
  DT_VARIABLEARRAY<t1f34a5e5> unk_3810f4;
  t7bd3842a unk_80d753b;
  DT_ENUM<DT_INT> unk_1ae0e98;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
