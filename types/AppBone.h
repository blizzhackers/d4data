/**
 * Definition: AppBone
 * Hash: 98dc03a5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AppBone : public ComplexRead {
  DT_UINT dwBoneHash;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
