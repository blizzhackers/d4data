/**
 * Definition: ExplosionDefinition
 * Hash: ef2ef3aa
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct ExplosionDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> eType;
  DT_VECTOR3D wvDirection;
  tcbfdd2ea unk_d03716d;
  tcbfdd2ea pathRadius;
  DT_RANGE<DT_INT> unk_bebfab2;
  DT_RANGE<DT_INT> unk_6a15ca2;
  DT_FLOAT flCutoffRadius;
  DT_FLOAT aHorizontalAngle;
  DT_FLOAT aVerticalAngle;
  DT_FLOAT flDuration;
  DT_FLOAT flChance;
  DT_FLOAT flFrequency;
  DT_VECTOR3D unk_6b38232;
  DT_VECTOR3D unk_6b38134;
  DT_FLOAT unk_c5b3851;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
