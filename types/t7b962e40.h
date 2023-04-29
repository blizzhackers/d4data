/**
 * Definition: t7b962e40
 * Hash: 7b962e40
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"

#pragma push(pack, 1)

struct t7b962e40 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  MarkerHandle tMarkerHandle;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
