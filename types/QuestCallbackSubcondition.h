/**
 * Definition: QuestCallbackSubcondition
 * Hash: 958458b0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct QuestCallbackSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_UINT dwPad;
  DT_INT nStepUID;
  DT_UINT nCallbackUID;
  DT_ENUM<DT_INT> eComp;
  DT_UINT nCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
