/**
 * Definition: t98dc03a5
 * Hash: 98dc03a5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t98dc03a5 : public ComplexRead {
  DT_UINT dwBoneHash;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
