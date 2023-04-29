/**
 * Definition: t680773db
 * Hash: 680773db
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t680773db : public ComplexRead {
  tb42131c6 tComponent;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
