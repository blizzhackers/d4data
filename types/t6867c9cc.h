/**
 * Definition: t6867c9cc
 * Hash: 6867c9cc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6867c9cc : public ComplexRead {
  DT_SNO_NAME tSNOName;
  DT_ENUM<DT_INT> eActorType;
  DT_ENUM<DT_INT> eGender;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
