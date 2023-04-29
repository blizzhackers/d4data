/**
 * Definition: t74952762
 * Hash: 74952762
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t74952762 : public ComplexRead {
  DT_UINT uGameAccountId;
  DT_INT64 uAuthToken;
  DT_INT unk_2f5806b;
  DT_FIXEDARRAY<DT_BYTE, 128> tSessionKey;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
