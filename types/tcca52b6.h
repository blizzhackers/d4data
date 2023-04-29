/**
 * Definition: tcca52b6
 * Hash: cca52b6
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tcca52b6 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT bSuccess;
  DT_ACD_NETWORK_NAME annItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
