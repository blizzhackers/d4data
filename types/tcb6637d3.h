/**
 * Definition: tcb6637d3
 * Hash: cb6637d3
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tcb6637d3 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<64> unk_f0a462f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
