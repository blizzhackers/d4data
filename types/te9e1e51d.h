/**
 * Definition: te9e1e51d
 * Hash: e9e1e51d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct te9e1e51d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_INT nChange;
  DT_UINT unk_6c0cb90;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
