/**
 * Definition: t41b30aab
 * Hash: 41b30aab
 */

#pragma once

#include "../types.h"
#include "InterpolationPathHeader.h"
#include "t63010144.h"

#pragma push(pack, 1)

struct t41b30aab : public ComplexRead {
  InterpolationPathHeader tHeader;
  DT_VARIABLEARRAY<t63010144> ptArrayNodes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
