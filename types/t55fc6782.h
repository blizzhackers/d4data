/**
 * Definition: t55fc6782
 * Hash: 55fc6782
 */

#pragma once

#include "../types.h"
#include "tbb74a93b.h"

#pragma push(pack, 1)

struct t55fc6782 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tbb74a93b> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
