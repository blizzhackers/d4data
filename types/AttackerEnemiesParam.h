/**
 * Definition: AttackerEnemiesParam
 * Hash: 38007346
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AttackerEnemiesParam : public ComplexRead {
  DT_ENUM<DT_INT> eScalarFunction;
  DT_ENUM<DT_INT> unk_bde3eaf;
  DT_UINT uID;
  DT_UINT uNameHash;
  DT_INT fBypass;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
