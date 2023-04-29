/**
 * Definition: tedab1b66
 * Hash: edab1b66
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct tedab1b66 : public ComplexRead {
  DT_UINT szName;
  StringLabelHandleEx hLabel;
  DT_SNO<SnoGroup::Texture> snoNormal;
  DT_SNO<SnoGroup::Texture> unk_829b337;
  DT_SNO<SnoGroup::Texture> unk_25e61ae;
  t6b1c5d9c hIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
