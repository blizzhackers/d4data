/**
 * Definition: t560ae4cf
 * Hash: 560ae4cf
 */

#pragma once

#include "../types.h"
#include "InterpolationPathHeader.h"
#include "t977100c8.h"

#pragma push(pack, 1)

struct t560ae4cf : public ComplexRead {
  InterpolationPathHeader tHeader;
  DT_VARIABLEARRAY<t977100c8> ptArrayNodes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
