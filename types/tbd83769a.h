/**
 * Definition: tbd83769a
 * Hash: bd83769a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbd83769a : public ComplexRead {
  DT_SNO<SnoGroup::Animation> snoAnimation;
  DT_SNO<SnoGroup::Cloth> unk_410408a;
  DT_FLOAT flBlendTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
