/**
 * Definition: ParagonUnequipBoardMessage
 * Hash: 2f75b7fc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ParagonUnequipBoardMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::ParagonBoard> unk_cee34d8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
