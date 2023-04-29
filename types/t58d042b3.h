/**
 * Definition: t58d042b3
 * Hash: 58d042b3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t58d042b3 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_UINT dwParentHash;
  DT_CSTRING szParent;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
