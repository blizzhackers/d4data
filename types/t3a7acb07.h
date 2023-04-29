/**
 * Definition: t3a7acb07
 * Hash: 3a7acb07
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t3a7acb07 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_OPTIONAL<DT_INT> annTarget;
  DT_OPTIONAL<DT_INT> unk_5692531;
  DT_OPTIONAL<DT_INT> unk_2b88f71;
  DT_OPTIONAL<DT_INT> unk_a6fef34;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
