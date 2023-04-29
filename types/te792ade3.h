/**
 * Definition: te792ade3
 * Hash: e792ade3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te792ade3 : public ComplexRead {
  DT_UINT dwID;
  DT_SNO<SnoGroup::QuestChain> unk_59d58e5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
