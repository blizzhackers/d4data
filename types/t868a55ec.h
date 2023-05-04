/**
 * Definition: t868a55ec
 * Hash: 868a55ec
 */

#pragma once

#include "../types.h"
#include "SchedulerGlobalUniqueCategory.h"

#pragma push(pack, 1)

struct t868a55ec : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<SchedulerGlobalUniqueCategory> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
