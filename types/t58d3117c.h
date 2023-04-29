/**
 * Definition: t58d3117c
 * Hash: 58d3117c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t58d3117c : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
