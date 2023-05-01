/**
 * Definition: te6f4bbd7
 * Hash: e6f4bbd7
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct te6f4bbd7 : public ComplexRead {
  GBIDHeader tHeader;
  DT_ENUM<DT_INT> eScope;
  DT_ENUM<DT_INT> eType;
  DT_INT nDefaultValue;
  DT_UINT unk_9e4e90a;
  DT_ENUM<DT_INT> unk_3ca5a82;
  DT_ENUM<DT_INT> unk_e616755;
  DT_INT unk_c24a257;
  DT_INT unk_387f176;
  DT_SNO<SnoGroup::SubZone> unk_5574b39;
  DT_SNO<SnoGroup::Quest> unk_8cfb605;
  DT_VARIABLEARRAY<DT_UINT> unk_2bbc72e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
