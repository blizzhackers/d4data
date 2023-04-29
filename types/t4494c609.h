/**
 * Definition: t4494c609
 * Hash: 4494c609
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4494c609 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::World> snoWorld;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
