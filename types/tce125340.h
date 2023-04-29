/**
 * Definition: tce125340
 * Hash: ce125340
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tce125340 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_CSTRING szName;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_INT unk_d6d0056;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
