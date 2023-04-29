/**
 * Definition: t48290b97
 * Hash: 48290b97
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t48290b97 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Item> snoItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
