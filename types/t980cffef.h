/**
 * Definition: t980cffef
 * Hash: 980cffef
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t980cffef : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_a488aa6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
