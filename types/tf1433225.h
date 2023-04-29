/**
 * Definition: tf1433225
 * Hash: f1433225
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf1433225 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_UINT dwGroupHash;
  DT_INT idValue;
  DT_CSTRING szGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
