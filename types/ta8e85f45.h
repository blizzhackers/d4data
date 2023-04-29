/**
 * Definition: ta8e85f45
 * Hash: a8e85f45
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta8e85f45 : public ComplexRead {
  DT_SNO<SnoGroup::MaterialValue> unk_ad7dd9c;
  DT_FLOAT value;
  DT_INT unk_2362b28;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
