/**
 * Definition: t3f2da5e2
 * Hash: 3f2da5e2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3f2da5e2 : public ComplexRead {
  DT_FIXEDARRAY<DT_BYTE, 4> unk_cd39b27;
  DT_FIXEDARRAY<DT_BYTE, 4> unk_a6c6afd;
  DT_WORD unk_2e1ba44;
  DT_BYTE dwFlags;
  DT_BYTE unk_d188924;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
