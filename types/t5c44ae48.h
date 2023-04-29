/**
 * Definition: t5c44ae48
 * Hash: 5c44ae48
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct t5c44ae48 : public ComplexRead {
  DT_ENUM<DT_INT> unk_831761a;
  DT_FLOAT unk_e714dff;
  DT_SNO<SnoGroup::EffectGroup> snoEffect;
  PRTransform transform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
