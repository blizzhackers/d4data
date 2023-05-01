/**
 * Definition: t255c7330
 * Hash: 255c7330
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t255c7330 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eType;
  DT_SNO_NAME snoAsset;
  DT_ENUM<DT_INT> eTeam;
  DT_CHARARRAY<1024> vRMessage;
  DT_CHARARRAY<64> unk_77b6d3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
