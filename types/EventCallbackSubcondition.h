/**
 * Definition: EventCallbackSubcondition
 * Hash: 15ec7660
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct EventCallbackSubcondition : public ComplexRead {
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
