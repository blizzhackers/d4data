/**
 * Definition: AppearanceDefinition
 * Hash: 83fd2b19
 */

#pragma once

#include "../types.h"
#include "AppearanceLook.h"
#include "AppearanceMaterial.h"
#include "Structure.h"
#include "t12daec08.h"
#include "t297ea0a8.h"
#include "t6c048b8b.h"
#include "ta5c1f30e.h"

#pragma push(pack, 1)

struct AppearanceDefinition : public ComplexRead {
  Structure tStructure;
  DT_UINT dwFlags;
  DT_VARIABLEARRAY<AppearanceLook> ptAppearanceLooks;
  DT_VARIABLEARRAY<AppearanceMaterial> ptAppearanceMaterials;
  DT_SNO<SnoGroup::MarkerSet> unk_e79217;
  DT_VARIABLEARRAY<t297ea0a8> unk_f70dadb;
  DT_UINT unk_272cae5;
  t12daec08 unk_af015fc;
  DT_POLYMORPHIC_VARIABLEARRAY unk_4f51617;
  DT_VARIABLEARRAY<t6c048b8b> unk_6c10d1;
  DT_FLOAT unk_9a6abe3;
  DT_FLOAT flDeformationScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
