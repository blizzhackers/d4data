/**
 * Definition: ItemTier
 * Hash: 33a68e03
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ItemTier : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoHead;
  DT_SNO<SnoGroup::Item> snoTorso;
  DT_SNO<SnoGroup::Item> snoFeet;
  DT_SNO<SnoGroup::Item> snoHands;
  DT_SNO<SnoGroup::Item> snoLegs;
  DT_SNO<SnoGroup::Item> snoMainHand;
  DT_SNO<SnoGroup::Item> snoOffHand;
  DT_SNO<SnoGroup::Item> unk_10ef80a;
  DT_SNO<SnoGroup::Item> unk_2424420;
  DT_SNO<SnoGroup::Item> unk_7757fd6;
  DT_SNO<SnoGroup::Item> unk_9e2632;
  DT_SNO<SnoGroup::Item> unk_6ce8668;
  DT_SNO<SnoGroup::Dye> snoDye;
  DT_UINT szName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
