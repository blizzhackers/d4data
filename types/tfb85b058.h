/**
 * Definition: tfb85b058
 * Hash: fb85b058
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tfb85b058 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Item> unk_226a57b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
