/**
 * Definition: HearthPortalInfoMessage
 * Hash: 39724e5f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct HearthPortalInfoMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_ACD_NETWORK_NAME annPortal;
  DT_INT bResetUI;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
