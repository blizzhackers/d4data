/**
 * Definition: tb45c2d8f
 * Hash: b45c2d8f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tc80e1187.h"

#pragma push(pack, 1)

struct tb45c2d8f : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_9de2896;
  DT_FIXEDARRAY<tc80e1187, 16> arTransmogs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
