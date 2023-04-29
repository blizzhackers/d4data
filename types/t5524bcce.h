/**
 * Definition: t5524bcce
 * Hash: 5524bcce
 */

#pragma once

#include "../types.h"
#include "ta48e11e6.h"

#pragma push(pack, 1)

struct t5524bcce : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPowerFrom;
  DT_VARIABLEARRAY<ta48e11e6> unk_ad10223;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
