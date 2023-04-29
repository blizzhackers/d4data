/**
 * Definition: PlayCutsceneMessage
 * Hash: 6d6923d5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayCutsceneMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
