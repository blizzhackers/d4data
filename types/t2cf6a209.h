/**
 * Definition: t2cf6a209
 * Hash: 2cf6a209
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2cf6a209 : public ComplexRead {
  DT_UINT unk_3ef8e38;
  DT_SNO<SnoGroup::Power> unk_f4c14e2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
