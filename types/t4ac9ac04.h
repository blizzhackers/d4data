/**
 * Definition: t4ac9ac04
 * Hash: 4ac9ac04
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t4ac9ac04 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_ddfb7d6;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_INT64 unk_526a589;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
