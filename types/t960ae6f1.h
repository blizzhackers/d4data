/**
 * Definition: t960ae6f1
 * Hash: 960ae6f1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t960ae6f1 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_e4fae63;
  DT_INT bSuccess;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
