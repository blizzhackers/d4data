/**
 * Definition: t49d4b843
 * Hash: 49d4b843
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t49d4b843 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Affix> snoAffix;
  DT_INT unk_9bbc7a5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
