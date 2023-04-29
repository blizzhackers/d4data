/**
 * Definition: EmoteDefinition
 * Hash: 37b1da83
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct EmoteDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT hImageNormal;
  DT_UINT unk_c380a6f;
  DT_UINT unk_bd1ee3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
