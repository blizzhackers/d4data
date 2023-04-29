/**
 * Definition: t14ef0839
 * Hash: 14ef0839
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t14ef0839 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_INT unk_d8caf57;
  DT_VARIABLEARRAY<DT_GBID<0x17>> arPetType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
