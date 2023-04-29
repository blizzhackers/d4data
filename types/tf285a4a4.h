/**
 * Definition: tf285a4a4
 * Hash: f285a4a4
 */

#pragma once

#include "../types.h"
#include "t3adfcfd4.h"
#include "t42e90c26.h"
#include "t70c77f41.h"

#pragma push(pack, 1)

struct tf285a4a4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t70c77f41> arHeroes;
  DT_VARIABLEARRAY<t42e90c26> unk_8189b39;
  DT_VARIABLEARRAY<t3adfcfd4> arNPCs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
