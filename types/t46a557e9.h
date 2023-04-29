/**
 * Definition: t46a557e9
 * Hash: 46a557e9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t46a557e9 : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_STRING_FORMULA unk_15d6919;
  DT_STRING_FORMULA unk_9969233;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
