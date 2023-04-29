/**
 * Definition: t26d3dba1
 * Hash: 26d3dba1
 */

#pragma once

#include "../types.h"
#include "t53b76221.h"

#pragma push(pack, 1)

struct t26d3dba1 : public ComplexRead {
  DT_VARIABLEARRAY<t53b76221> unk_461a1f4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
