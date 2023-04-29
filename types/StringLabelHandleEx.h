/**
 * Definition: StringLabelHandleEx
 * Hash: 2b0285c0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct StringLabelHandleEx : public ComplexRead {
  DT_SNO<SnoGroup::StringList> snoStringList;
  DT_UINT szLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
