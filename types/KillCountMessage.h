/**
 * Definition: KillCountMessage
 * Hash: b952d8da
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct KillCountMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_INT nPlayerKills;
  DT_INT nDeaths;
  DT_INT nAssists;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
