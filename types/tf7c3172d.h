/**
 * Definition: tf7c3172d
 * Hash: f7c3172d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tf7c3172d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
