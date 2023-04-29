/**
 * Definition: LocalPlayerNetEvent
 * Hash: 844125c1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct LocalPlayerNetEvent : public ComplexRead {
  DT_UINT uSig;
  DT_ENUM<DT_INT> eEvent;
  DT_UINT uAccountId;
  DT_UINT uGameAccountId;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
