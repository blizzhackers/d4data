/**
 * Definition: SerializeData
 * Hash: 9ce1b262
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SerializeData : public ComplexRead {
  DT_INT dwOffset;
  DT_INT dwSizeAndFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
