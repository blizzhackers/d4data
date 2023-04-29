/**
 * Definition: tccd96a71
 * Hash: ccd96a71
 */

#pragma once

#include "../types.h"
#include "tbf3bc347.h"

#pragma push(pack, 1)

struct tccd96a71 : public ComplexRead {
  DT_SNO<SnoGroup::Texture> unk_a2bea27;
  DT_VARIABLEARRAY<tbf3bc347> unk_784700d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
