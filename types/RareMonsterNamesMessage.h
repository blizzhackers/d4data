/**
 * Definition: RareMonsterNamesMessage
 * Hash: 4c32886b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct RareMonsterNamesMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_FIXEDARRAY<DT_GBID<0x7>, 2> pgbidRareNames;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::MonsterAffix>, 4> snoMonsterAffixes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
