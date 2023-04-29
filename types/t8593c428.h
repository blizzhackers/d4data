/**
 * Definition: t8593c428
 * Hash: 8593c428
 */

#pragma once

#include "../types.h"
#include "TestDefinitionMusic.h"
#include "t1d0f43e.h"
#include "t4f4d854b.h"
#include "te1291b50.h"

#pragma push(pack, 1)

struct t8593c428 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_BYTE> unk_c9522b4;
  DT_VARIABLEARRAY<TestDefinitionMusic> unk_6e07592;
  DT_VARIABLEARRAY<t1d0f43e> unk_91c65f5;
  DT_VARIABLEARRAY<t4f4d854b> unk_7d0510b;
  DT_VARIABLEARRAY<te1291b50> unk_b0f69e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
