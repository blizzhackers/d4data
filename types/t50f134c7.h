/**
 * Definition: t50f134c7
 * Hash: 50f134c7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t50f134c7 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eItemLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
