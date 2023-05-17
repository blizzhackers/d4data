/**
 * Definition: ClothDefinition
 * Hash: 45f8e523
 */

#pragma once

#include "../types.h"
#include "taced015b.h"

#pragma push(pack, 1)

struct ClothDefinition : public ComplexRead {
  DT_SNO<SnoGroup::AmbientSound> snoAmbientSound;
  DT_UINT dwFlags;
  DT_INT nPurchaseGizmo;
  taced015b unk_be5c463;
  DT_FLOAT unk_570fcff;
  DT_FLOAT unk_b8886b;
  DT_FLOAT unk_a3b3e2;
  DT_FLOAT unk_c5496ae;
  DT_FLOAT unk_fc18a85;
  DT_FLOAT unk_643f5b;
  DT_RANGE<DT_INT> unk_5f96b22;
  DT_RANGE<DT_INT> unk_4848e0f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
