/**
 * Definition: tca979bb0
 * Hash: ca979bb0
 */

#pragma once

#include "../types.h"
#include "t4dffd2e9.h"

#pragma push(pack, 1)

struct tca979bb0 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t4dffd2e9> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
