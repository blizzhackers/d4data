/**
 * Definition: t9eef0cf4
 * Hash: 9eef0cf4
 */

#pragma once

#include "../types.h"
#include "t3a911960.h"
#include "t4c2dc82.h"
#include "tb88f4265.h"
#include "tda38fe05.h"
#include "tf1fed2b7.h"
#include "tfd884ad3.h"

#pragma push(pack, 1)

struct t9eef0cf4 : public ComplexRead {
  t3a911960 unk_3c1684f;
  DT_VARIABLEARRAY<DT_VECTOR4D> unk_1466466;
  DT_VARIABLEARRAY<DT_VECTOR4D> unk_8bdea5d;
  DT_VARIABLEARRAY<DT_FLOAT> unk_f3049dd;
  DT_VARIABLEARRAY<DT_FLOAT> unk_a90684;
  DT_VARIABLEARRAY<DT_FLOAT> unk_6b5f617;
  DT_VARIABLEARRAY<tb88f4265> unk_55a1a8c;
  DT_VARIABLEARRAY<DT_WORD> ptLevels;
  DT_VARIABLEARRAY<DT_FLOAT> unk_1236f02;
  DT_VARIABLEARRAY<DT_WORD> ptParentIndices;
  DT_VARIABLEARRAY<DT_WORD> unk_ca70b10;
  DT_VARIABLEARRAY<DT_WORD> unk_74ac4d4;
  DT_VARIABLEARRAY<DT_VECTOR4D> ptWeights;
  DT_VARIABLEARRAY<DT_WORD> unk_75e7dfc;
  DT_VARIABLEARRAY<DT_WORD> unk_a51816d;
  DT_VARIABLEARRAY<DT_WORD> ptTriangles;
  DT_VARIABLEARRAY<DT_WORD> unk_ca38fa8;
  DT_VARIABLEARRAY<DT_FLOAT> unk_f47fd3e;
  DT_VARIABLEARRAY<DT_WORD> unk_8ecbb2b;
  DT_VARIABLEARRAY<DT_FLOAT> unk_9f71907;
  DT_VARIABLEARRAY<tfd884ad3> unk_93f4433;
  DT_VARIABLEARRAY<tfd884ad3> unk_250faf;
  DT_VARIABLEARRAY<tfd884ad3> unk_4213ccc;
  DT_VARIABLEARRAY<tfd884ad3> unk_4bbdfb2;
  DT_VARIABLEARRAY<t4c2dc82> unk_b88f73;
  DT_VARIABLEARRAY<tda38fe05> unk_2b558d6;
  DT_VARIABLEARRAY<tf1fed2b7> unk_94dfc4;
  DT_VARIABLEARRAY<DT_WORD> unk_ff07ce;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
