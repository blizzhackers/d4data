/**
 * Definition: tac560e08
 * Hash: ac560e08
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tac560e08 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT64 unk_8a6cb1e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
