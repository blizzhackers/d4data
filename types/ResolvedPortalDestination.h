/**
 * Definition: ResolvedPortalDestination
 * Hash: f5a0a118
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ResolvedPortalDestination : public ComplexRead {
  DT_SNO<SnoGroup::World> snoWorld;
  DT_STARTLOC_NAME uEntranceGUID;
  DT_SNO<SnoGroup::LevelArea> snoDestLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
