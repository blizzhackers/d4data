/**
 * Definition: t7ae253c2
 * Hash: 7ae253c2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7ae253c2 : public ComplexRead {
  DT_OPTIONAL<DT_INT> flRadius;
  DT_OPTIONAL<DT_INT> bOverlap;
  DT_OPTIONAL<DT_INT> wp1;
  DT_OPTIONAL<DT_INT> wp2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
