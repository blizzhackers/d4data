/**
 * Definition: GlobalDefinition
 * Hash: ec77129a
 */

#pragma once

#include "../types.h"
#include "GlobalBase.h"

#pragma push(pack, 1)

struct GlobalDefinition : public ComplexRead {
  DT_UINT dwNextID;
  DT_POLYMORPHIC_VARIABLEARRAY ptContent;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
