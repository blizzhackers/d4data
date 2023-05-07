/**
 * Definition: t63701e68
 * Hash: 63701e68
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t63701e68 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_STARTLOC_NAME dwEntranceName;
  DT_UINT dwPortalType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
