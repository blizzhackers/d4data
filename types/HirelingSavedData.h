/**
 * Definition: HirelingSavedData
 * Hash: 9aad289f
 */

#pragma once

#include "../types.h"
#include "HirelingInfo.h"

#pragma push(pack, 1)

struct HirelingSavedData : public ComplexRead {
  DT_FIXEDARRAY<HirelingInfo, 3> tHireling;
  DT_ENUM<DT_INT> eActiveHireling;
  DT_UINT dwAvailableHirelings;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
