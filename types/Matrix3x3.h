/**
 * Definition: Matrix3x3
 * Hash: 815e08b3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Matrix3x3 : public ComplexRead {
  DT_FLOAT _11;
  DT_FLOAT _12;
  DT_FLOAT _13;
  DT_FLOAT _21;
  DT_FLOAT _22;
  DT_FLOAT _23;
  DT_FLOAT _31;
  DT_FLOAT _32;
  DT_FLOAT _33;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
