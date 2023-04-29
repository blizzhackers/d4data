/**
 * Definition: t9901ddd4
 * Hash: 9901ddd4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t9901ddd4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> unk_756ebc1;
  DT_INT unk_953936b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
