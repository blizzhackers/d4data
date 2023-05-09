/**
 * Definition: FreezeDirectionMessage
 * Hash: 3a7acb07
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct FreezeDirectionMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_OPTIONAL<DT_INT> annTarget;
  DT_OPTIONAL<DT_INT> unk_5692531;
  DT_OPTIONAL<DT_INT> flImpactDirection;
  DT_OPTIONAL<DT_INT> unk_a6fef34;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
