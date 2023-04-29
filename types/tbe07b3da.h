/**
 * Definition: tbe07b3da
 * Hash: be07b3da
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbe07b3da : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::QuestChain> unk_9d67ea6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
