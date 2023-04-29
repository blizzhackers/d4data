/**
 * Definition: AchievementProgressXboxOneMessage
 * Hash: 36fef466
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct AchievementProgressXboxOneMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_UINT nProfileAwardId;
  DT_UINT nProgress;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
