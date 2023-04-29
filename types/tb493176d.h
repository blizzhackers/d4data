/**
 * Definition: tb493176d
 * Hash: b493176d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb493176d : public ComplexRead {
  DT_UINT hImageHandle;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
