/**
 * Definition: t2d410740
 * Hash: 2d410740
 */

#pragma once

#include "../types.h"
#include "te3f5648a.h"

#pragma push(pack, 1)

struct t2d410740 : public ComplexRead {
  DT_POLYMORPHIC_VARIABLEARRAY ptProxData;
  DT_SNO<SnoGroup::EffectGroup> unk_6d3dfe6;
  DT_INT unk_a183154;
  DT_FLOAT unk_6a602d7;
  DT_FLOAT unk_c68b42;
  DT_FLOAT unk_77f6d53;
  DT_FLOAT unk_da484be;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
