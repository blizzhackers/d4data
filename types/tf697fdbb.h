/**
 * Definition: tf697fdbb
 * Hash: f697fdbb
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tf697fdbb : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_INT unk_eaf087a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
