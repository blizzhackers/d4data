/**
 * Definition: ScrollbarElementImages
 * Hash: dea05ee4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScrollbarElementImages : public ComplexRead {
  DT_FIXEDARRAY<DT_UINT, 3> unk_69faf1f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
