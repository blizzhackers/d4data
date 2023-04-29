/**
 * Definition: t3de80e31
 * Hash: 3de80e31
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t3de80e31 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nType;
  DT_FIXEDARRAY<DT_INT, 2> arParams;
  DT_INT unk_2b2f2eb;
  DT_FIXEDARRAY<DT_BYTE, 30000> tData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
