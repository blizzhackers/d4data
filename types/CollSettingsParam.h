/**
 * Definition: CollSettingsParam
 * Hash: 400e4fac
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CollSettingsParam : public ComplexRead {
  DT_INT nFrameStart;
  DT_INT nFrameEnd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
