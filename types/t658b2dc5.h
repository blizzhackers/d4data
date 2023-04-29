/**
 * Definition: t658b2dc5
 * Hash: 658b2dc5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t658b2dc5 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT64 dwTimeStamp;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
