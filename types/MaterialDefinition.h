/**
 * Definition: MaterialDefinition
 * Hash: b96b9098
 */

#pragma once

#include "../types.h"
#include "UberMaterial.h"
#include "t343baac3.h"
#include "t5ec54f01.h"
#include "t88c1160d.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct MaterialDefinition : public ComplexRead {
  DT_UINT dwFlags;
  UberMaterial tUberMaterial;
  DT_VARIABLEARRAY<t5ec54f01> unk_e22e114;
  DT_SNO<SnoGroup::Surface> snoSurface;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Biome>, 4> unk_a4fd56f;
  t343baac3 unk_c879a37;
  DT_FLOAT unk_93ea20a;
  tcbfdd2ea unk_f43ef5b;
  tcbfdd2ea unk_95fa9b8;
  DT_UINT unk_ce6fe3b;
  DT_ENUM<DT_INT> unk_245935;
  DT_ENUM<DT_INT> unk_6d58226;
  DT_FLOAT flDuration;
  DT_FLOAT tOutroDuration;
  DT_FLOAT unk_a08119e;
  DT_FLOAT unk_5b1ce37;
  DT_FLOAT flStiffness;
  DT_FLOAT unk_c92c676;
  t88c1160d unk_2a29881;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
