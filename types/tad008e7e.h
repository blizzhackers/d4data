/**
 * Definition: tad008e7e
 * Hash: ad008e7e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tad008e7e : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT uToken;
  DT_ENUM<DT_INT> eError;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
