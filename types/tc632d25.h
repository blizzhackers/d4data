/**
 * Definition: tc632d25
 * Hash: c632d25
 */

#pragma once

#include "../types.h"
#include "tb0f2a959.h"

#pragma push(pack, 1)

struct tc632d25 : public ComplexRead {
  tb0f2a959 tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::Power> snoPower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
