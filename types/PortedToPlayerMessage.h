/**
 * Definition: PortedToPlayerMessage
 * Hash: a07c6923
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PortedToPlayerMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_a51c96a;
  DT_UINT unk_2a8dda3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
