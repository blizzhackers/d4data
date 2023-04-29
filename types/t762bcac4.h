/**
 * Definition: t762bcac4
 * Hash: 762bcac4
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct t762bcac4 : public ComplexRead {
  DT_UINT szName;
  StringLabelHandleEx hLabel;
  DT_SNO<SnoGroup::Texture> snoMask;
  t6b1c5d9c hIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
