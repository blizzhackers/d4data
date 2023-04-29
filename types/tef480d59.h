/**
 * Definition: tef480d59
 * Hash: ef480d59
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tef480d59 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT sampleIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
