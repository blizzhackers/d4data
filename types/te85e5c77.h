/**
 * Definition: te85e5c77
 * Hash: e85e5c77
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct te85e5c77 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> idQuest;
  DT_INT unk_14e1214;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
