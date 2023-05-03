/**
 * Definition: t3d4fd272
 * Hash: 3d4fd272
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"
#include "te1a124f1.h"

#pragma push(pack, 1)

struct t3d4fd272 : public ComplexRead {
  DT_UINT szBoneName;
  DT_FLOAT unk_36bc3de;
  DT_FLOAT flDuration;
  DT_FLOAT flRotationSpeed;
  DT_FLOAT flRotationAngle;
  DT_INT unk_92ce5f2;
  tcbfdd2ea unk_10363a5;
  DT_VARIABLEARRAY<te1a124f1> unk_afaabbe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
