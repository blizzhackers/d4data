/**
 * Definition: ta4438562
 * Hash: a4438562
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta4438562 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
