/**
 * Definition: UpdateConvAutoAdvanceMessage
 * Hash: c994f589
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct UpdateConvAutoAdvanceMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Conversation> snoConv;
  DT_INT nLineUID;
  DT_UINT dwNextAdvanceTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
