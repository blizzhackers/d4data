/**
 * Definition: tb0f2a959
 * Hash: b0f2a959
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tb0f2a959 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_1bdcc9f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
