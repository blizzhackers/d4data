/**
 * Definition: tf1f99346
 * Hash: f1f99346
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t7e0a5501.h"

#pragma push(pack, 1)

struct tf1f99346 : public ComplexRead {
  RequiredMessageHeader tHeader;
  t7e0a5501 unk_b6d083b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
