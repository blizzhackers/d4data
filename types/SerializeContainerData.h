/**
 * Definition: SerializeContainerData
 * Hash: 2afe3ba5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SerializeContainerData : public ComplexRead {
  DT_INT dwOffset;
  DT_INT dwSizeAndFlags;
  DT_INT nCount;
  DT_INT dwContainerFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
