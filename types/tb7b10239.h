/**
 * Definition: tb7b10239
 * Hash: b7b10239
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tb7b10239 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_a488aa6;
  DT_SNO<SnoGroup::World> unk_3ec603d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
