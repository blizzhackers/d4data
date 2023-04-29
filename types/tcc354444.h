/**
 * Definition: tcc354444
 * Hash: cc354444
 */

#pragma once

#include "../types.h"
#include "InterpolationPathHeader.h"
#include "t77e24bbd.h"

#pragma push(pack, 1)

struct tcc354444 : public ComplexRead {
  InterpolationPathHeader tHeader;
  DT_VARIABLEARRAY<t77e24bbd> ptArrayNodes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
