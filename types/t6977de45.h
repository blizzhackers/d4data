/**
 * Definition: t6977de45
 * Hash: 6977de45
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6977de45 : public ComplexRead {
  DT_ENUM<DT_INT> eKey;
  DT_UINT dwModifiers;
  DT_ENUM<DT_INT> unk_51406ef;
  DT_UINT unk_a9a85be;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
