/**
 * Definition: tabe97783
 * Hash: abe97783
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tabe97783 : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_VARIABLEARRAY<DT_VECTOR2D> unk_7c1bedb;
  DT_VECTOR2D vCenterPos;
  DT_FLOAT flRadius;
  DT_INT bValid;
  DT_INT unk_16e2f51;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
