/**
 * Definition: UnassignSkillMessage
 * Hash: 8b782c6c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct UnassignSkillMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nSlot;
  DT_INT unk_1c27791;
  DT_INT unk_c5e6abf;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
