/**
 * Definition: t958458b0
 * Hash: 958458b0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t958458b0 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_UINT dwPad;
  DT_INT nStepUID;
  DT_UINT unk_967491d;
  DT_ENUM<DT_INT> eComp;
  DT_UINT nCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
