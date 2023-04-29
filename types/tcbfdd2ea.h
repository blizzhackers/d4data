/**
 * Definition: tcbfdd2ea
 * Hash: cbfdd2ea
 */

#pragma once

#include "../types.h"
#include "InterpolationPathHeader.h"
#include "t77aada63.h"

#pragma push(pack, 1)

struct tcbfdd2ea : public ComplexRead {
  InterpolationPathHeader tHeader;
  DT_VARIABLEARRAY<t77aada63> ptArrayNodes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
