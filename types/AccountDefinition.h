/**
 * Definition: AccountDefinition
 * Hash: 5965da36
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AccountDefinition : public ComplexRead {
  DT_VARIABLEARRAY<DT_BYTE> pProtoData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
