/**
 * Definition: tda8a2315
 * Hash: da8a2315
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"

#pragma push(pack, 1)

struct tda8a2315 : public ComplexRead {
  DT_ENUM<DT_INT> unk_6c68319;
  DT_INT unk_d64b2c9;
  DT_SNO<SnoGroup::Power> snoSummonPower;
  MarkerHandle tMarkerHandle;
  DT_ENUM<DT_INT> eVisibility;
  DT_INT unk_209d19e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
