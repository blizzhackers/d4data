/**
 * Definition: t1929bddf
 * Hash: 1929bddf
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t1929bddf : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> idQuest;
  DT_INT unk_2f41f03;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
