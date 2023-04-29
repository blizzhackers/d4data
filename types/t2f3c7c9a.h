/**
 * Definition: t2f3c7c9a
 * Hash: 2f3c7c9a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2f3c7c9a : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> snoSkillPower;
  DT_UINT unk_cb51d8e;
  DT_INT unk_5099eca;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
