/**
 * Definition: t17bd50db
 * Hash: 17bd50db
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t17bd50db : public ComplexRead {
  DT_UINT unk_20b45d7;
  DT_ENUM<DT_INT> eType;
  DT_FLOAT flRadius;
  DT_FLOAT flLength;
  DT_FLOAT aPitch;
  DT_FLOAT aYaw;
  DT_VECTOR3D unk_711980c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
