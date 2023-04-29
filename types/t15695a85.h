/**
 * Definition: t15695a85
 * Hash: 15695a85
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t15695a85 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_3580552;
  DT_FLOAT unk_a3f1699;
  DT_ENUM<DT_INT> unk_ecc987f;
  DT_FLOAT flCapsuleLength;
  DT_INT unk_8a404eb;
  DT_SNO<SnoGroup::Condition> unk_e354a1f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
