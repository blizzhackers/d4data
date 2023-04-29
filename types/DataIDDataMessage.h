/**
 * Definition: DataIDDataMessage
 * Hash: 11aa8166
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct DataIDDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT id;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
