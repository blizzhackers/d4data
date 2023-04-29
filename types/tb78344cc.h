/**
 * Definition: tb78344cc
 * Hash: b78344cc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t586d03a.h"

#pragma push(pack, 1)

struct tb78344cc : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_eddc1bd;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_VECTOR3D wpLocation;
  t586d03a unk_8818621;
  DT_INT bStartImmediately;
  DT_INT unk_fe671fb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
