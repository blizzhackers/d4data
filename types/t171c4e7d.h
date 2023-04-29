/**
 * Definition: t171c4e7d
 * Hash: 171c4e7d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t171c4e7d : public ComplexRead {
  RequiredMessageHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
