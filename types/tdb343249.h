/**
 * Definition: tdb343249
 * Hash: db343249
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdb343249 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> snoSkillPower;
  DT_INT nSkillRank;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
