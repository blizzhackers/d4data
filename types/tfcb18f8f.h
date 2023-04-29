/**
 * Definition: tfcb18f8f
 * Hash: fcb18f8f
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"

#pragma push(pack, 1)

struct tfcb18f8f : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  MarkerHandle tMarkerHandle;
  DT_UINT dwGroupHash;
  DT_INT idValue;
  DT_CSTRING szGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
