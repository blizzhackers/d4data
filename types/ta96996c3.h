/**
 * Definition: ta96996c3
 * Hash: a96996c3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta96996c3 : public ComplexRead {
  DT_UINT tComponent;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
