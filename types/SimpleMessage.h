/**
 * Definition: SimpleMessage
 * Hash: d271bf4f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct SimpleMessage : public ComplexRead {
  RequiredMessageHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
