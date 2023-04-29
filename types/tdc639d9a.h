/**
 * Definition: tdc639d9a
 * Hash: dc639d9a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tdc639d9a : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_393b384;
  DT_UINT unk_74eafc7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
