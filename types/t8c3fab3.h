/**
 * Definition: t8c3fab3
 * Hash: 8c3fab3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8c3fab3 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_41f8768;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
