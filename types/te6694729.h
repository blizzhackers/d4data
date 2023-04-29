/**
 * Definition: te6694729
 * Hash: e6694729
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "t18e49fff.h"
#include "t8aef87e7.h"

#pragma push(pack, 1)

struct te6694729 : public ComplexRead {
  PRTransform transform;
  DT_INT fWater;
  DT_INT unk_b3bf971;
  t18e49fff unk_81eccce;
  DT_VARIABLEARRAY<t8aef87e7> unk_4e7e318;
  DT_VARIABLEARRAY<DT_VECTOR2D> unk_9275540;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
