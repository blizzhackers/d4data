/**
 * Definition: t343baac3
 * Hash: 343baac3
 */

#pragma once

#include "../types.h"
#include "t6a8a63e0.h"

#pragma push(pack, 1)

struct t343baac3 : public ComplexRead {
  DT_ENUM<DT_INT> unk_1fa233b;
  DT_VARIABLEARRAY<t6a8a63e0> unk_76177c6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
