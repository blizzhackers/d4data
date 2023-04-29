/**
 * Definition: t6ce32aa3
 * Hash: 6ce32aa3
 */

#pragma once

#include "../types.h"
#include "ItemTier.h"
#include "t619110a4.h"

#pragma push(pack, 1)

struct t6ce32aa3 : public ComplexRead {
  ItemTier tItemTier;
  t619110a4 unk_14f575e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
