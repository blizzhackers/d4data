/**
 * Definition: t9794644b
 * Hash: 9794644b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9794644b : public ComplexRead {
  DT_STRING_FORMULA unk_b1f0f4e;
  DT_FLOAT unk_c31445d;
  DT_FLOAT unk_6661ef2;
  DT_ENUM<DT_INT> unk_f8c5768;
  DT_FLOAT flSpeedMultiplier;
  DT_INT unk_995412;
  DT_INT unk_81f023c;
  DT_INT unk_9bc1705;
  DT_INT unk_9d8eaf7;
  DT_INT unk_7723a92;
  DT_ENUM<DT_INT> unk_b804e2d;
  DT_FLOAT unk_9369802;
  DT_SNO<SnoGroup::Power> unk_9a7df3e;
  DT_GBID<0x22> unk_9ab5680;
  DT_STRING_FORMULA unk_f05bba;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
