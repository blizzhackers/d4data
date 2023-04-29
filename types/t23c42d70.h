/**
 * Definition: t23c42d70
 * Hash: 23c42d70
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t9d494ccc.h"

#pragma push(pack, 1)

struct t23c42d70 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<1000> szLogString;
  DT_INT64 unk_a23ac9b;
  DT_INT unk_6248a18;
  DT_FIXEDARRAY<t9d494ccc, 128> uACDInSameWorld;
  DT_OPTIONAL<DT_INT> ann;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
