/**
 * Definition: NpcTemplate
 * Hash: 5dbc277d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct NpcTemplate : public ComplexRead {
  DT_CSTRING szName;
  DT_SNO<SnoGroup::Actor> snoMale;
  DT_SNO<SnoGroup::Actor> snoFemale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
