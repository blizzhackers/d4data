/**
 * Definition: AffixMessage
 * Hash: ce15ecf3
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t82008b02.h"

#pragma push(pack, 1)

struct AffixMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_INT fIdentified;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Affix>, 5> aAffixes;
  DT_FIXEDARRAY<t82008b02, 5> unk_186efea;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Affix>, 5> unk_be0e086;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
