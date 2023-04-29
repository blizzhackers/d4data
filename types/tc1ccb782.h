/**
 * Definition: tc1ccb782
 * Hash: c1ccb782
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc1ccb782 : public ComplexRead {
  DT_CSTRING szName;
  DT_CSTRING szToolTip;
  DT_SNO<SnoGroup::Actor> unk_8f42da5;
  DT_SNO<SnoGroup::AnimTree> unk_8cb2061;
  DT_VARIABLEARRAY<DT_GBID<0x35>> unk_c249c5f;
  DT_INT unk_83f3d3e;
  DT_INT unk_58f8666;
  DT_INT unk_8f05a31;
  DT_INT unk_c62b399;
  DT_INT unk_fd60c8f;
  DT_INT unk_8711100;
  DT_INT unk_d289db4;
  DT_INT unk_d8df50f;
  DT_INT unk_d6da84;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
