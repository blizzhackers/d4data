/**
 * Definition: Matrix4x4
 * Hash: 815e0cf5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Matrix4x4 : public ComplexRead {
  DT_FLOAT _11;
  DT_FLOAT _12;
  DT_FLOAT _13;
  DT_FLOAT _14;
  DT_FLOAT _21;
  DT_FLOAT _22;
  DT_FLOAT _23;
  DT_FLOAT _24;
  DT_FLOAT _31;
  DT_FLOAT _32;
  DT_FLOAT _33;
  DT_FLOAT _34;
  DT_FLOAT _41;
  DT_FLOAT _42;
  DT_FLOAT _43;
  DT_FLOAT _44;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
