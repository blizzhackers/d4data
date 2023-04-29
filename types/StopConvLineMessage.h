/**
 * Definition: StopConvLineMessage
 * Hash: f2a9efc9
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct StopConvLineMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nConvLineGUID;
  DT_INT fStoppedByUser;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
