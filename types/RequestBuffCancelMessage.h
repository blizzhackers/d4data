/**
 * Definition: RequestBuffCancelMessage
 * Hash: d32669b7
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct RequestBuffCancelMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT unk_86c2785;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
