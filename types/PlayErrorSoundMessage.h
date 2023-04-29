/**
 * Definition: PlayErrorSoundMessage
 * Hash: c0888b8e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayErrorSoundMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eWarningSound;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
