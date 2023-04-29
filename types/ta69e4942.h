/**
 * Definition: ta69e4942
 * Hash: a69e4942
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta69e4942 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_ENUM<DT_INT> unk_224db6f;
  DT_UINT unk_781a1ac;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
