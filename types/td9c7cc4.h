/**
 * Definition: td9c7cc4
 * Hash: d9c7cc4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td9c7cc4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_1fe6e13;
  DT_INT bFromItem;
  DT_ACD_NETWORK_NAME unk_ed3262c;
  DT_SNO<SnoGroup::Aspect> snoAspect;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
