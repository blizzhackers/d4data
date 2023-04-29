/**
 * Definition: td8954fbc
 * Hash: d8954fbc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tc58eb80a.h"

#pragma push(pack, 1)

struct td8954fbc : public ComplexRead {
  RequiredMessageHeader tHeader;
  tc58eb80a unk_f703a7e;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
