/**
 * Definition: StringTableEntry
 * Hash: e5282031
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct StringTableEntry : public ComplexRead {
  DT_CSTRING szLabel;
  DT_CSTRING szText;
  DT_UINT hLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
