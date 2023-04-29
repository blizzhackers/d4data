/**
 * Definition: t1786e9fa
 * Hash: 1786e9fa
 */

#pragma once

#include "../types.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct t1786e9fa : public ComplexRead {
  DT_INT unk_5a28796;
  DT_INT unk_d6b1ed2;
  t6b1c5d9c unk_b264c41;
  t6b1c5d9c unk_b93f506;
  t6b1c5d9c unk_ffcb54c;
  DT_SNO<SnoGroup::TiledStyle> unk_ddbf409;
  DT_SNO<SnoGroup::TiledStyle> unk_a781ae5;
  DT_SNO<SnoGroup::TiledStyle> unk_966c056;
  DT_RGBACOLOR unk_7310a9;
  DT_RGBACOLOR unk_807b009;
  DT_CSTRING unk_12178f2;
  t6b1c5d9c unk_eb26c08;
  t6b1c5d9c unk_608378d;
  t6b1c5d9c unk_ac65a3e;
  DT_SNO<SnoGroup::Sound> unk_69f59f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
