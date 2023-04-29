/**
 * Definition: t6f3d2867
 * Hash: 6f3d2867
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6f3d2867 : public ComplexRead {
  DT_INT unk_ad6e729;
  DT_SNO<SnoGroup::Item> unk_a3af342;
  DT_INT unk_e71b50;
  DT_INT unk_496ba25;
  DT_INT unk_3347283;
  DT_INT unk_dce555f;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_UINT dwCurrencyAmount;
  DT_UINT unk_c605c30;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
