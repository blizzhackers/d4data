/**
 * Definition: t8683827c
 * Hash: 8683827c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8683827c : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::Item> snoItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
