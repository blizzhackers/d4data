/**
 * Definition: tcbeafe6b
 * Hash: cbeafe6b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tcbeafe6b : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_4675a7c;
  DT_INT unk_5f40a5f;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Quest>, 128> unk_7882c15;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
