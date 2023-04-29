/**
 * Definition: PreloadSceneDataMessage
 * Hash: 40933794
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PreloadSceneDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSScene;
  DT_SNO<SnoGroup::Scene> snoScene;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
