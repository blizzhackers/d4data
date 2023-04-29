/**
 * Definition: PortedToWaypointMessage
 * Hash: b56c7171
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PortedToWaypointMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
