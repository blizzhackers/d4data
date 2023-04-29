/**
 * Definition: td57efcd1
 * Hash: d57efcd1
 */

#pragma once

#include "../types.h"
#include "t553a13a2.h"
#include "t859de469.h"

#pragma push(pack, 1)

struct td57efcd1 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t859de469> unk_4c404ef;
  DT_VARIABLEARRAY<t553a13a2> unk_51879a8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
