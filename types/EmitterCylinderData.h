/**
 * Definition: EmitterCylinderData
 * Hash: 609e718e
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct EmitterCylinderData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eFacing;
  DT_FLOAT unk_8a3d22d;
  DT_INT unk_d1e17f4;
  tcbfdd2ea pathRadius;
  tcbfdd2ea pathHeight;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
