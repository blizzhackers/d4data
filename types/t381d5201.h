/**
 * Definition: t381d5201
 * Hash: 381d5201
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct t381d5201 : public ComplexRead {
  DT_FLOAT value;
  DT_INT unk_b5a2c78;
  tcbfdd2ea unk_411da82;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
