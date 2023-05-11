/**
 * Definition: t288a8c0b
 * Hash: 288a8c0b
 */

#pragma once

#include "../types.h"
#include "CustomizationData.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t288a8c0b : public ComplexRead {
  RequiredMessageHeader tHeader;
  CustomizationData tCustomizationData;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
