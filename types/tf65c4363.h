/**
 * Definition: tf65c4363
 * Hash: f65c4363
 */

#pragma once

#include "../types.h"
#include "t56bf0569.h"

#pragma push(pack, 1)

struct tf65c4363 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Script>> snoScript;
  DT_GBID<0x14> unk_7316dbf;
  DT_VARIABLEARRAY<DT_GBID<0x18>> arActorGroups;
  DT_VARIABLEARRAY<DT_GBID<0x33>> unk_b5b0f9a;
  DT_VARIABLEARRAY<t56bf0569> unk_9af876f;
  DT_INT bIsChild;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
