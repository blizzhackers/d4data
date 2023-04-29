/**
 * Definition: tb58061b6
 * Hash: b58061b6
 */

#pragma once

#include "../types.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct tb58061b6 : public ComplexRead {
  DT_ENUM<DT_INT> unk_67f869d;
  t6b1c5d9c unk_a7d70e6;
  t6b1c5d9c unk_3f146a2;
  t6b1c5d9c unk_8aa2175;
  t6b1c5d9c unk_2aa2ac9;
  t6b1c5d9c unk_28bd9a5;
  t6b1c5d9c unk_eece018;
  DT_SNO<SnoGroup::TiledStyle> unk_2741aa3;
  DT_SNO<SnoGroup::TiledStyle> unk_d3af33f;
  DT_SNO<SnoGroup::TiledStyle> unk_8f22e72;
  DT_SNO<SnoGroup::TiledStyle> unk_2f237c6;
  DT_SNO<SnoGroup::TiledStyle> unk_4f32182;
  DT_SNO<SnoGroup::TiledStyle> unk_16c2055;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
