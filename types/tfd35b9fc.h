/**
 * Definition: tfd35b9fc
 * Hash: fd35b9fc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tfd35b9fc : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_UINT idGameAccount;
  DT_UINT unk_81ffda3;
  DT_INT nPlayerClass;
  DT_INT bIsMale;
  DT_INT nLevel;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
