/**
 * Definition: t13006658
 * Hash: 13006658
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t13006658 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VECTOR3D wvOBB;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
