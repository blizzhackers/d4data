/**
 * Definition: SNODiskEntry
 * Hash: 2b97cd0d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SNODiskEntry : public ComplexRead {
  DT_ENUM<DT_INT> snoGroup;
  DT_UINT uGuid;
  DT_UINT dwNameOffset;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
