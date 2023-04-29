/**
 * Definition: t41b30aaa
 * Hash: 41b30aaa
 */

#pragma once

#include "../types.h"
#include "InterpolationPathHeader.h"
#include "t63010143.h"

#pragma push(pack, 1)

struct t41b30aaa : public ComplexRead {
  InterpolationPathHeader tHeader;
  DT_VARIABLEARRAY<t63010143> ptArrayNodes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
