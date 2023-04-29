/**
 * Definition: DisplayGameTextMessage
 * Hash: 99e0703a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct DisplayGameTextMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<1024> szMsg;
  DT_OPTIONAL<DT_INT> flTimeUntilFade;
  DT_OPTIONAL<DT_INT> nParam1;
  DT_OPTIONAL<DT_INT> nParam2;
  DT_OPTIONAL<DT_INT> unk_8e0c078;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
