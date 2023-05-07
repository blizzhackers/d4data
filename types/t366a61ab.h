/**
 * Definition: t366a61ab
 * Hash: 366a61ab
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t366a61ab : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT uCommandFrame;
  DT_UINT unk_b0fd968;
  DT_BYTE uFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
