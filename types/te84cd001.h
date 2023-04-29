/**
 * Definition: te84cd001
 * Hash: e84cd001
 */

#pragma once

#include "../types.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct te84cd001 : public ComplexRead {
  DT_FLOAT flTime;
  bcQuat qRot;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
