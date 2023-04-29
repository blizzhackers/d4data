/**
 * Definition: TexAnim
 * Hash: 3655f9d6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TexAnim : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_828d6cf;
  DT_FLOAT unk_a7dff70;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
