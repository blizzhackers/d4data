/**
 * Definition: DeathFadeTimeMessage
 * Hash: 763dedaa
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct DeathFadeTimeMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_INT nTimeUntilFade;
  DT_INT nFadeTime;
  DT_INT bRecurseForAttachments;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
