/**
 * Definition: PlayerSetCameraDefaultsMessage
 * Hash: b40a7f1f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerSetCameraDefaultsMessage : public ComplexRead {
  RequiredMessageHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
