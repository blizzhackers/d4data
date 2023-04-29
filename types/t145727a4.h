/**
 * Definition: t145727a4
 * Hash: 145727a4
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"

#pragma push(pack, 1)

struct t145727a4 : public ComplexRead {
  StringLabelHandleEx hLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
