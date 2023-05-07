/**
 * Definition: PathLink
 * Hash: 157f62db
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"

#pragma push(pack, 1)

struct PathLink : public ComplexRead {
  DT_UINT szLinkName;
  MarkerHandle unk_700310d;
  DT_ENUM<DT_INT> unk_b45c1dd;
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
