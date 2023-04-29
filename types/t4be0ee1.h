/**
 * Definition: t4be0ee1
 * Hash: 4be0ee1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t4be0ee1 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annTarget;
  DT_ACD_NETWORK_NAME annAttacker;
  DT_OPTIONAL<DT_INT> unk_5692531;
  DT_OPTIONAL<DT_INT> unk_5d619c6;
  DT_OPTIONAL<DT_INT> unk_2b88f71;
  DT_OPTIONAL<DT_INT> unk_b1ae0e8;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
