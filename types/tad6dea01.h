/**
 * Definition: tad6dea01
 * Hash: ad6dea01
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t87803841.h"

#pragma push(pack, 1)

struct tad6dea01 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_GBID<0x2d> unk_283d1ad;
  t87803841 tPayload;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
