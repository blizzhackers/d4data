/**
 * Definition: t363d95fb
 * Hash: 363d95fb
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t363d95fb : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_GBID<0x3c> gbidSubzoneModifierTag;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_INT64 dwStartTime;
  DT_INT64 dwEndTime;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_VECTOR3D wpLocation;
  DT_INT unk_433bf34;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
