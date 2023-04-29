/**
 * Definition: ScrollbarStyle
 * Hash: c2aa895
 */

#pragma once

#include "../types.h"
#include "tdea05ee4.h"

#pragma push(pack, 1)

struct ScrollbarStyle : public ComplexRead {
  DT_FIXEDARRAY<tdea05ee4, 5> tElements;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
