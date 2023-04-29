/**
 * Definition: tcec13164
 * Hash: cec13164
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcec13164 : public ComplexRead {
  DT_FLOAT flTime;
  DT_VECTOR3D vScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
