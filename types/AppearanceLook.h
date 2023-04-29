/**
 * Definition: AppearanceLook
 * Hash: bb103065
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AppearanceLook : public ComplexRead {
  DT_UINT szLookName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
