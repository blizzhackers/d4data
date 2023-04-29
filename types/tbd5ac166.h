/**
 * Definition: tbd5ac166
 * Hash: bd5ac166
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbd5ac166 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::QuestChain> snoQuestChain;
  DT_ENUM<DT_INT> eState;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
