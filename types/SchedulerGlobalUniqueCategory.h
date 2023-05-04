/**
 * Definition: SchedulerGlobalUniqueCategory
 * Hash: d2f29025
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct SchedulerGlobalUniqueCategory : public ComplexRead {
  GBIDHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
