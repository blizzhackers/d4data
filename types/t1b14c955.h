/**
 * Definition: t1b14c955
 * Hash: 1b14c955
 */

#pragma once

#include "../types.h"
#include "t70e8e8ce.h"

#pragma push(pack, 1)

struct t1b14c955 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t70e8e8ce> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
