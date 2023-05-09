/**
 * Definition: t2bdcb856
 * Hash: 2bdcb856
 */

#pragma once

#include "../types.h"
#include "NPCItems.h"
#include "ValidComponent.h"
#include "t9bdeeb8c.h"

#pragma push(pack, 1)

struct t2bdcb856 : public ComplexRead {
  DT_INT fRandom;
  t9bdeeb8c tColorSet;
  NPCItems tItems;
  DT_FIXEDARRAY<ValidComponent, 4> ptComponents;
  DT_UINT sLookName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
