/**
 * Definition: t833be23b
 * Hash: 833be23b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t833be23b : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Item> snoItem;
  DT_INT nItemCount;
  DT_INT unk_f0998ad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
