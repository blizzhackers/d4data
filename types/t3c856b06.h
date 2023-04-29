/**
 * Definition: t3c856b06
 * Hash: 3c856b06
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3c856b06 : public ComplexRead {
  DT_ENUM<DT_INT> unk_66a8c73;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
