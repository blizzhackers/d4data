/**
 * Definition: tfb1b44b9
 * Hash: fb1b44b9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfb1b44b9 : public ComplexRead {
  DT_CSTRING szProgressTarget;
  DT_CSTRING szForegroundChild;
  DT_SNO<SnoGroup::TiledStyle> unk_d25a883;
  DT_SNO<SnoGroup::TiledStyle> unk_e66a388;
  DT_SNO<SnoGroup::Sound> unk_309438d;
  DT_ENUM<DT_INT> eSmoothing;
  DT_FLOAT unk_58fbb1b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
