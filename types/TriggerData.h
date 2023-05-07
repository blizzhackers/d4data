/**
 * Definition: TriggerData
 * Hash: 5124724e
 */

#pragma once

#include "../types.h"
#include "t8d3deb43.h"

#pragma push(pack, 1)

struct TriggerData : public ComplexRead {
  t8d3deb43 unk_57774cb;
  DT_SNO<SnoGroup::Power> unk_526ad18;
  DT_SNO<SnoGroup::Power> unk_1bbdc5a;
  DT_INT unk_67a7cbd;
  DT_SNO<SnoGroup::Power> unk_599f054;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
