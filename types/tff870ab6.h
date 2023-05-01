/**
 * Definition: tff870ab6
 * Hash: ff870ab6
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"
#include "te87d70c1.h"

#pragma push(pack, 1)

struct tff870ab6 : public ComplexRead {
  GBIDHeader tHeader;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_SNO<SnoGroup::Power> snoBuff;
  DT_SNO<SnoGroup::Quest> unk_891f4a8;
  DT_FLOAT unk_82ec588;
  DT_INT unk_52d3115;
  DT_VARIABLEARRAY<te87d70c1> unk_579f22d;
  DT_INT unk_a60ef1c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
