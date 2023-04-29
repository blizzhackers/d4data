/**
 * Definition: t377ff5a8
 * Hash: 377ff5a8
 */

#pragma once

#include "../types.h"
#include "t7cd30e23.h"

#pragma push(pack, 1)

struct t377ff5a8 : public ComplexRead {
  DT_GBID<0x34> unk_a6562e7;
  DT_SNO<SnoGroup::NpcComponentSet> unk_f42e76e;
  DT_SNO<SnoGroup::Appearance> unk_f73ff5f;
  DT_SNO<SnoGroup::NpcComponentSet> unk_43056f9;
  DT_SNO<SnoGroup::Appearance> unk_29a102a;
  DT_SNO<SnoGroup::AnimSet> unk_f54a1d;
  DT_SNO<SnoGroup::AnimTree> unk_ca2e3e1;
  DT_VARIABLEARRAY<t7cd30e23> unk_15bd7f7;
  DT_ENUM<DT_INT> unk_d1f4575;
  DT_CSTRING szToolTip;
  DT_INT unk_83f3d3e;
  DT_INT unk_8f05a31;
  DT_INT unk_fd60c8f;
  DT_INT unk_8711100;
  DT_INT unk_d289db4;
  DT_INT unk_c3784ea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
