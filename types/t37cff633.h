/**
 * Definition: t37cff633
 * Hash: 37cff633
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t37cff633 : public ComplexRead {
  DT_FIXEDARRAY<DT_UINT, 6> unk_cc75689;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
