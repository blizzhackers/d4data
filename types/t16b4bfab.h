/**
 * Definition: t16b4bfab
 * Hash: 16b4bfab
 */

#pragma once

#include "../types.h"
#include "HelpCode.h"

#pragma push(pack, 1)

struct t16b4bfab : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<HelpCode> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
