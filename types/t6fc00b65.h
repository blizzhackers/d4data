/**
 * Definition: t6fc00b65
 * Hash: 6fc00b65
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct t6fc00b65 : public ComplexRead {
  t72bd65f8 tHeader;
  tf5ac91bb tItemId;
  DT_INT unk_cc95a19;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
