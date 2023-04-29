/**
 * Definition: t2bdcb856
 * Hash: 2bdcb856
 */

#pragma once

#include "../types.h"
#include "t9bdeeb8c.h"
#include "ta96996c3.h"
#include "tabf5cfe3.h"

#pragma push(pack, 1)

struct t2bdcb856 : public ComplexRead {
  DT_INT fRandom;
  t9bdeeb8c tColorSet;
  tabf5cfe3 tItems;
  DT_FIXEDARRAY<ta96996c3, 4> ptComponents;
  DT_UINT unk_29b9a49;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
