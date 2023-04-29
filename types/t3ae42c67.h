/**
 * Definition: t3ae42c67
 * Hash: 3ae42c67
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3ae42c67 : public ComplexRead {
  DT_VARIABLEARRAY<DT_GBID<0x35>> unk_5187ce0;
  DT_SNO<SnoGroup::AnimTree> unk_8cb2061;
  DT_SNO<SnoGroup::AnimSet> unk_3a90a9d;
  DT_SNO<SnoGroup::Actor> unk_e67b728;
  DT_UINT unk_e9dd8e9;
  DT_UINT unk_d42692e;
  DT_UINT unk_1059e8c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
