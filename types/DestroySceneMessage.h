/**
 * Definition: DestroySceneMessage
 * Hash: bbe4e09d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct DestroySceneMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSScene;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
