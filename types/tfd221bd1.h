/**
 * Definition: tfd221bd1
 * Hash: fd221bd1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfd221bd1 : public ComplexRead {
  DT_UINT unk_44213a;
  DT_UINT hIconNormal;
  DT_UINT unk_c5ca709;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
