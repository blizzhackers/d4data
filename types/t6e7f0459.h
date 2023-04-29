/**
 * Definition: t6e7f0459
 * Hash: 6e7f0459
 */

#pragma once

#include "../types.h"
#include "InterpolationPathHeader.h"
#include "t8fccfaf2.h"

#pragma push(pack, 1)

struct t6e7f0459 : public ComplexRead {
  InterpolationPathHeader tHeader;
  DT_VARIABLEARRAY<t8fccfaf2> ptArrayNodes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
