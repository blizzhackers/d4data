/**
 * Definition: t74e39c1f
 * Hash: 74e39c1f
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t74e39c1f : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_993dfc2;
  PRTransform tTransform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
