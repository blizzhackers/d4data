/**
 * Definition: PrefetchRunOnDisk
 * Hash: 2e1ea00e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PrefetchRunOnDisk : public ComplexRead {
  DT_UINT uCount;
  DT_UINT uStart;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
