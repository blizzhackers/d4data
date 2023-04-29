/**
 * Definition: RequiredMessageHeader
 * Hash: c61966ef
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct RequiredMessageHeader : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_INT unk_2f5806b;
  DT_OPTIONAL<DT_INT> dwSize;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
