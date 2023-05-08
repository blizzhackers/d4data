/**
 * Definition: BountyIcons
 * Hash: e4a9aedd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct BountyIcons : public ComplexRead {
  DT_UINT hIconNormal;
  DT_UINT hIconDisabled;
  DT_UINT hNotificationIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
