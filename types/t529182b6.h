/**
 * Definition: t529182b6
 * Hash: 529182b6
 */

#pragma once

#include "../types.h"
#include "t4d7ce083.h"

#pragma push(pack, 1)

struct t529182b6 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT unk_90afea4;
  DT_FLOAT unk_4bf3f6b;
  DT_FLOAT unk_9411612;
  DT_VARIABLEARRAY<t4d7ce083> unk_b0425e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
