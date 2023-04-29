/**
 * Definition: t4a3fc7b4
 * Hash: 4a3fc7b4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4a3fc7b4 : public ComplexRead {
  DT_INT fIsCorpse;
  DT_INT unk_fd4d7b0;
  DT_ENUM<DT_INT> eCrafterType;
  DT_INT unk_fdbd32c;
  DT_FLOAT unk_49ab5de;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
