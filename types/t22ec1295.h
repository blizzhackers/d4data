/**
 * Definition: t22ec1295
 * Hash: 22ec1295
 */

#pragma once

#include "../types.h"
#include "t78a562aa.h"

#pragma push(pack, 1)

struct t22ec1295 : public ComplexRead {
  DT_UINT dwUnlockLevel;
  DT_SNO<SnoGroup::Quest> unk_fec1a8e;
  t78a562aa tPassiveData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
