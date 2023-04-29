/**
 * Definition: SalvageResultsMessage
 * Hash: eaf0edda
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t65bae4f1.h"

#pragma push(pack, 1)

struct SalvageResultsMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FIXEDARRAY<t65bae4f1, 16> arNewItems;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 64> unk_7df7c86;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
