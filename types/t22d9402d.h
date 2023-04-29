/**
 * Definition: t22d9402d
 * Hash: 22d9402d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t22d9402d : public ComplexRead {
  DT_ENUM<DT_INT> unk_f7b58a0;
  DT_ENUM<DT_INT> unk_ee2c1dd;
  DT_SNO<SnoGroup::Emote> snoEmote;
  DT_SNO<SnoGroup::Item> snoConsumable;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
