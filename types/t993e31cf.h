/**
 * Definition: t993e31cf
 * Hash: 993e31cf
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t993e31cf : public ComplexRead {
  DT_UINT unk_461add4;
  DT_ENUM<DT_INT> eFootstepType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
