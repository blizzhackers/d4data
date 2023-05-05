/**
 * Definition: QuestSubconditionBase
 * Hash: bae7843e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct QuestSubconditionBase : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
