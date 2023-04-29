/**
 * Definition: RevealTeamMessage
 * Hash: 68b7e24b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct RevealTeamMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eTeam;
  DT_UINT dwTeamFlags;
  DT_ENUM<DT_INT> eTeamColoring;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
