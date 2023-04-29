/**
 * Definition: tb9d56406
 * Hash: b9d56406
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb9d56406 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_FLOAT flHealthPercent;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
