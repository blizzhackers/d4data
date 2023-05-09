/**
 * Definition: ItemCountSubcondition
 * Hash: 69df3ce9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ItemCountSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Item> snoItem;
  DT_INT nItemCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
