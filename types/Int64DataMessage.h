/**
 * Definition: Int64DataMessage
 * Hash: 89a315d4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct Int64DataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT64 nData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
