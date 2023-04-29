/**
 * Definition: t7d803492
 * Hash: 7d803492
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t7d803492 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_a488aa6;
  DT_INT bLeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
