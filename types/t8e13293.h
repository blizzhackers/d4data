/**
 * Definition: t8e13293
 * Hash: 8e13293
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct t8e13293 : public ComplexRead {
  t72bd65f8 tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::Emblem> snoEmblem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
