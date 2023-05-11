/**
 * Definition: t587c11d4
 * Hash: 587c11d4
 */

#pragma once

#include "../types.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct t587c11d4 : public ComplexRead {
  tf5ac91bb unk_efc6d0;
  DT_CHARARRAY<17> unk_a91882c;
  DT_UINT dwGameAccountId;
  DT_CHARARRAY<33> szName;
  DT_INT unk_8601b80;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
