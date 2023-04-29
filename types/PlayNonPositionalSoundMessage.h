/**
 * Definition: PlayNonPositionalSoundMessage
 * Hash: 90121b71
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayNonPositionalSoundMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Sound> snoSound;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
