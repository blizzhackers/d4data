/**
 * Definition: ActorUIData
 * Hash: b8942531
 */

#pragma once

#include "../types.h"
#include "ConditionWrapper.h"

#pragma push(pack, 1)

struct ActorUIData : public ComplexRead {
  DT_UINT unk_c5e14e0;
  DT_UINT hMinimapIcon;
  DT_UINT unk_f51d2b3;
  DT_INT unk_29a7d8d;
  DT_INT unk_cae4486;
  DT_INT unk_98a6ae1;
  DT_INT unk_c26b08b;
  DT_FLOAT unk_fab46e5;
  DT_FLOAT unk_cf8f262;
  DT_FLOAT unk_6aad51d;
  ConditionWrapper unk_c6ec070;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
