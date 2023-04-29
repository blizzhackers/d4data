/**
 * Definition: SNODataMessage
 * Hash: dd166f4f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct SNODataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::None> snoData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
