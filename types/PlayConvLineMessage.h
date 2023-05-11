/**
 * Definition: PlayConvLineMessage
 * Hash: d55da4d9
 */

#pragma once

#include "../types.h"
#include "PlayLineParams.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayConvLineMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annSpeaker;
  PlayLineParams tParams;
  DT_ENUM<DT_INT> eContext;
  DT_FLOAT unk_659589a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
