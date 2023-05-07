/**
 * Definition: AssignSkillMessage
 * Hash: 1d99229
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct AssignSkillMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_INT nSlot;
  DT_INT nEnchantSlot;
  DT_INT unk_c5e6abf;
  DT_INT unk_2512b7c;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
