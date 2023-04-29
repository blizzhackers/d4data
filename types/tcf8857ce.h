/**
 * Definition: tcf8857ce
 * Hash: cf8857ce
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcf8857ce : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_GBID<0x18> gbidActorGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
