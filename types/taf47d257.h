/**
 * Definition: taf47d257
 * Hash: af47d257
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct taf47d257 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_ENUM<DT_INT> eDamageType;
  DT_INT unk_9d0a7aa;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
