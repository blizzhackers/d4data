/**
 * Definition: t4f861e97
 * Hash: 4f861e97
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4f861e97 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_GBID<0x18> gbidActorGroup;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
