/**
 * Definition: tc6ceb20c
 * Hash: c6ceb20c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc6ceb20c : public ComplexRead {
  DT_ENUM<DT_INT> eServiceType;
  DT_ENUM<DT_INT> unk_f6db5d5;
  DT_ENUM<DT_INT> eCrafterType;
  DT_FLOAT unk_e28f315;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_SNO<SnoGroup::Reputation> unk_433f3cc;
  DT_ENUM<DT_INT> unk_6a0f71a;
  DT_UINT unk_f41fecc;
  DT_UINT unk_d8a298f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
