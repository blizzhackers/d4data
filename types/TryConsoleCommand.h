/**
 * Definition: TryConsoleCommand
 * Hash: f491a0f1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct TryConsoleCommand : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_OPTIONAL<DT_INT> unk_243faa3;
  DT_CHARARRAY<1024> usMessage;
  SharedServerWorldPlace tPlaceTarget;
  DT_ACD_NETWORK_NAME annTarget;
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
