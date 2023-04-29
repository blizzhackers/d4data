/**
 * Definition: tdf1582ec
 * Hash: df1582ec
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdf1582ec : public ComplexRead {
  DT_SNO<SnoGroup::Power> unk_872c408;
  DT_SNO<SnoGroup::Quest> unk_fec1a8e;
  DT_INT nUnlockLevel;
  DT_UINT unk_f508498;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
