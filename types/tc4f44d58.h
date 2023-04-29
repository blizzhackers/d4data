/**
 * Definition: tc4f44d58
 * Hash: c4f44d58
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"
#include "tdca4dec2.h"

#pragma push(pack, 1)

struct tc4f44d58 : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  tcbfdd2ea unk_465327d;
  DT_VARIABLEARRAY<tdca4dec2> unk_cc7a7e1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
