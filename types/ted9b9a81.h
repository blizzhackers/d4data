/**
 * Definition: ted9b9a81
 * Hash: ed9b9a81
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ted9b9a81 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_CHARARRAY<128> szLabel;
  DT_INT unk_590b8b;
  DT_INT fHidden;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
