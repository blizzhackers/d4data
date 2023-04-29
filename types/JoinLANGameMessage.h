/**
 * Definition: JoinLANGameMessage
 * Hash: c0a0ed6a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct JoinLANGameMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT idSGame;
  DT_UINT idGameAccount;
  DT_CHARARRAY<128> szAccountName;
  DT_ENUM<DT_INT> eXLocale;
  DT_FLOAT flAspectRatio;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
