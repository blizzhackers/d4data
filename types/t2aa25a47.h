/**
 * Definition: t2aa25a47
 * Hash: 2aa25a47
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t2aa25a47 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FIXEDARRAY<DT_INT, 6> unk_ae25fc7;
  DT_FIXEDARRAY<DT_INT, 6> unk_cf0ad45;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
