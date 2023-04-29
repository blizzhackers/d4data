/**
 * Definition: tdbcb04f3
 * Hash: dbcb04f3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdbcb04f3 : public ComplexRead {
  DT_VARIABLEARRAY<DT_FLOAT> unk_ebf6585;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
