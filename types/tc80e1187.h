/**
 * Definition: tc80e1187
 * Hash: c80e1187
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc80e1187 : public ComplexRead {
  DT_ENUM<DT_INT> eSlot;
  DT_SNO<SnoGroup::Item> unk_9c2495b;
  DT_SNO<SnoGroup::Dye> snoDye;
  DT_INT bRemove;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
