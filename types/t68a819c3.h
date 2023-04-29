/**
 * Definition: t68a819c3
 * Hash: 68a819c3
 */

#pragma once

#include "../types.h"
#include "tdc622f50.h"

#pragma push(pack, 1)

struct t68a819c3 : public ComplexRead {
  DT_VARIABLEARRAY<tdc622f50> unk_55bda0c;
  DT_VARIABLEARRAY<tdc622f50> unk_63b0377;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
