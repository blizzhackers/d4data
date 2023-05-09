/**
 * Definition: ta2b0fc96
 * Hash: a2b0fc96
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"

#pragma push(pack, 1)

struct ta2b0fc96 : public ComplexRead {
  DT_CHARARRAY<64> szVariableName;
  DT_INT unk_9e7b180;
  DT_ENUM<DT_INT> unk_e1da18d;
  MarkerHandle tMarkerHandle;
  DT_GBID<0x18> gbidActorGroup;
  DT_GBID<0x33> unk_5b5276a;
  DT_CHARARRAY<64> unk_f5a5252;
  DT_SNO_NAME snoReference;
  DT_ENUM<DT_INT> unk_86254e0;
  DT_INT unk_a33b274;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
