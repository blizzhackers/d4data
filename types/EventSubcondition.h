/**
 * Definition: EventSubcondition
 * Hash: ec84db93
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct EventSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eState;
  DT_ENUM<DT_INT> unk_16e7bfc;
  DT_INT nStepUID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
